/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

int main(void){

  setup();
}
void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);     
  Serial.begin(9600);
  Serial.print("¡Hola Mundo!.\n");
  while (1){
    loop();

  }
  
}

void loop() {
  _delay_ms(1000); 
  digitalWrite(13,HIGH);
  _delay_ms(1000); 
  digitalWrite(13,LOW);

}
