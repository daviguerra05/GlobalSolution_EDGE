# Health Buddy

Hoje em dia a tecnologia tem sido cada vez mais presente no cotidiano, e na área da saúde não seria diferente, usada cada vez mais utilizada e melhorand a jornada do paciente, que regularmente se frustra com o tempo levado para realizar uma consulta médica, optando até por desistir e voltam para suas casas. Sendo assim decidimos produzir um sistema para automação de triagem baseada em inteligência artificial. Poderá ser acessada por um aplicativo e um site do próprio hospital, facilitando a jornada do paciente, pois ele terá a possibilidade de iniciar sua triagem a caminho do hospital. Para realizar o procedimento o cliente deverá ser um beneficiário, possuir conta cadastrada dentro do aplicativo, lá ele terá acesso ao processo de triagem e caso possua o kit de health care devices poderá sincroniza-los no sistema e caso não, chegando lá será necessário apenas medir a pressão e temperatura, um procedimento que será realizado no momento que o paciente chegar ao hospital por meio de sensores de temperatura, batimento cardiaco e pressão. Dessa forma otimizaremos o tempo de serviço no hospital.

Para executar:
Equipamentos necessários:
1x ESP32
2x Sensores DHT22
2x Pontenciometro 
9x Jumpercables 

Requisitos:

Bibliotecas
ArduinoJson.h
EspMQTTClient.h 

Utilizar site wokwi para executar o projeto
Utilizar a tago.io para recebimento de dados

A utilização do DHT22 é para realizar uma adapção para medir a pressão do paciente.


Funcionalidades: 

Com este projeto será possível realizar a medição da pressão e temperatura do paciente.

Autores:
Rui Amorim Siqueira - RM98436
Davi Passanha de Sousa Guerra - RM551605
