#include <OneWire.h>
#include <DallasTemperature.h>

// Pin donde se conecta el bus 1-Wire
const int pinDatosDQ = 9;
const int pinRelay = 7;
float temp1;

// Instancia a las clases OneWire y DallasTemperature
OneWire oneWireObjeto(pinDatosDQ);
DallasTemperature sensorDS18B20(&oneWireObjeto);
 
void setup() {
    // Iniciamos la comunicación serie
    Serial.begin(9600);
    // Iniciamos el bus 1-Wire
    sensorDS18B20.begin(); 
    pinMode(pinRelay, OUTPUT);
}
 
void loop() {
    // Mandamos comandos para toma de temperatura a los sensores
    Serial.println("Mandando comandos a los sensores");
    sensorDS18B20.requestTemperatures();
 
    // Leemos y mostramos los datos de los sensores DS18B20
    Serial.print("Temperatura sensor 0: ");
    temp1 = sensorDS18B20.getTempCByIndex(0);
    Serial.print(temp1);
    Serial.println(" C");

    if (temp1 < 20.0) {
      digitalWrite(pinRelay, HIGH);
    } else {
      digitalWrite(pinRelay, LOW);
    }
    // Serial.print("Temperatura sensor 1: ");
    // Serial.print(sensorDS18B20.getTempCByIndex(1));
    // Serial.println(" C");
    
    delay(1000); 
}