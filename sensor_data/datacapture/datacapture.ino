#include <ThingSpeak.h>

const long CHANNEL = 2038163;
const char *WHITE_API = "YZJHSMSBTKK6CS2E";


#define pinSensorA A0
#define pinSensorD 8

void setup() {
  pinMode(pinSensorD, INPUT);
  Serial.begin(9600);
  ThingSpeak.begin(client); //Inicializa o ThingSpeak 
}

void loop() {
  Serial.print("Digital:");
  
  if (digitalRead(pinSensorD)) {
     Serial.print("SEM UMIDADE ");
  } else {
     Serial.print("COM UMIDADE ");
  }

  Serial.print("  Analogico:");
  Serial.print(analogRead(pinSensorA)); 
  Serial.print("  ");

  Serial.print("  Atuador:");
  if (analogRead(pinSensorA) > 700) {
     Serial.println("SOLENOIDE LIGADO");
     //digitalWrite(pinSolenoide, HIGH);
  } else {
    Serial.println("SOLENOIDE DESLIGADO");
     //digitalWrite(pinSolenoide, LOW);
  }
}
