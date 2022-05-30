int soundPin = 13;            /* set pin https://images.app.goo.gl/DttfgaPsTV966HvC9  */

void setup(){
  pinMode(soundPin, OUTPUT);
}

void loop(){
  analogWrite(soundPin, 250); /* volume: 0 Disable/ 1-255 Enable */
  delay(1000);                /* delay */
  analogWrite(soundPin, 0);   /* volume disable */
  delay(1000);                /* delay */
}
