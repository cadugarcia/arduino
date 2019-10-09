/**
 * IoT - Leitura de um sensor APP
 * @author: Carlos Eduardo Garcia
 */
 
#include <Ultrasonic.h>
Ultrasonic ultrasonic(12, 13);
int distancia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distancia = ultrasonic.read();
  Serial.println(distancia);
  Serial.print("");
  delay(1000);'
}
