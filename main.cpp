#include "ArduinoJson.h"
#include "EspMQTTClient.h"
#include "DHTesp.h"
#include <cmath>

const int DHT_PIN = 15;

DHTesp dhtSensor;

// MQTT Configuracoes
EspMQTTClient client{
  "Wokwi-GUEST", //SSID do WiFi
  "",     // Senha do wifi
  "mqtt.tago.io",  // Endereço do servidor
  "Just Me",       // Usuario
  "7c997302-d93c-4308-9dbc-7cf48969f4d1", // Token do device
  "esp",           // Nome do device
  1883             // Porta de comunicação
};

void setup() {
  Serial.begin(9600);
  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
  Serial.println("Conectando WiFi");
  while (!client.isWifiConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("WiFi Conectado");
  Serial.println("Conectando com Servidor MQTT");
  while (!client.isMqttConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("MQTT Conectado");
}

// Callback da EspMQTTClient
void onConnectionEstablished()
{}
char bufferJson[100];

int PAS = 0;
int PAD = 0;
float temperatura = 0;
void loop() {
  PAS = map(analogRead(32),0,4095,70,370);
  PAD = map(analogRead(35),0,4095,40,200);
  TempAndHumidity  data = dhtSensor.getTempAndHumidity();
  temperatura = round(data.temperature);

  //JSON PAS
  StaticJsonDocument<300> documentoJson;
  documentoJson["variable"] = "PAS";
  documentoJson["value"] = PAS;
  documentoJson["unit"] = "mmHg";
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  //Envio de dados
  client.publish("topicoTDSPI", bufferJson);

  //JSON PAD
  StaticJsonDocument<300> documentoJson2;
  documentoJson2["variable"] = "PAD";
  documentoJson2["value"] = PAD;
  documentoJson2["unit"] = "mmHg";
  serializeJson(documentoJson2, bufferJson);
  Serial.println(bufferJson);
  //Envio de dados
  client.publish("topicoTDSPI_2", bufferJson);

  //JSON TEMPERATURA
  StaticJsonDocument<300> documentoJson3;
  documentoJson3["variable"] = "Temperatura";
  documentoJson3["value"] = temperatura;
  documentoJson3["unit"] = "celsius";
  serializeJson(documentoJson3, bufferJson);
  Serial.println(bufferJson);
  //Envio de dados
  client.publish("topicoTDSPI_3", bufferJson);


  delay(5000); //Tempo de espera para envio
  client.loop();
}