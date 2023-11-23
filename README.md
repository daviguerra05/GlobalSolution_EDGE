
## Health Buddy

Solução de Edge Computing and Computer Systems para o projeto Health Buddy.

Global Solution - 2ºsemestre - 2023


## Sobre o projeto

Atualmente, a tecnologia é cada vez mais presente na vida cotidiana, inclusive na área da saúde. Para aprimorar a experiência do paciente, desenvolvemos um `sistema de triagem baseado em inteligência artificial` acessível por meio de um aplicativo ou site do hospital. Isso permite que os pacientes iniciem a triagem antes mesmo de chegarem ao hospital, evitando frustrações com longas esperas por consultas médicas. Os pacientes que possuem Health care devices podem sincronizá-los no sistema, enquanto os demais podem medir pressão e temperatura no momento da chegada ao hospital por meio de sensores. Essa abordagem visa otimizar o tempo de serviço no hospital.



## Sobre a solução

Para esta solução do projeto Health Buddy, utilizamos o site https://wokwi.com/ para simular a operação do ESP32 e estabelecer comunicação via MQTT com o servidor da https://tago.io/.

O objetivo foi a simulação do recebimento e envio de dados provenientes dos sensores de temperatura corporal e pressão arterial.

Dada as restrições do https://wokwi.com/, optamos por empregar um sensor DHT22 para emular a leitura da temperatura corporal, enquanto dois potenciômetros foram utilizados para simular a medição da pressão arterial.


![image](https://github.com/daviguerra05/GlobalSolution_EDGE/assets/126623966/bd40a414-bc2b-4e26-a740-f0da7b7f8f0b)

![image](https://github.com/daviguerra05/GlobalSolution_EDGE/assets/126623966/e2cfed94-4e2c-4f87-aaaf-99852decbd14)

![image](https://github.com/daviguerra05/GlobalSolution_EDGE/assets/126623966/ff280e80-460a-4926-8dd0-e1ec5ebf11f4)

## Tecnologias

**Simulador:** https://wokwi.com/

**Servidor:** https://tago.io/

**Dashboards/Ações:** https://tago.io/


## Dependências

- **Bibliotecas**: ArduinoJson, EspMQTTClient, DHT sensor library for ESPx
- **1x** ESP32
- **1x** DHT22
- **2x** Potenciômetros
- **9x** Jumpercables
## Autores

- [Davi Passanha de Sousa Guerra - RM551605 - 1ESPW](https://www.github.com/daviguerra05)
- [Rui Amorim Siqueira - RM98436 - 1ESPW](https://github.com/ruiasiqueira)


## Ultilização

Execução do código e alteração dos valores dos sensores:

- [Link para o projeto Wokwi](https://wokwi.com/projects/382198605740711937)

Para visualização dos dashboards e executar ações:

- [Link para a Tago](https://tago.io/)


## Obrigado

![Logo](https://i.pinimg.com/originals/61/8f/08/618f083c61a7460ce0a6064319af41bd.gif)


