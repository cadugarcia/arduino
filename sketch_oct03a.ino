/*
 * Exemplo de uso de PWM
 * Exemplo 1: Controle de velocidade de um motor DC
 * @author: Carlos Garcia.
 */

void setup() {
  pinMode(3, OUTPUT); //importante !!! (saída PWM)
}

void loop() {
  analogWrite(3, 50); //PWM (0 a 255)
}
