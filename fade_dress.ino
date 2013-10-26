/* This sketch is a simple series of loops which use the analogWrite function to gradually fade 5 LEDs.
   There's a bit of copy/paste here - I may clean it up in the future, but for now I'm doing other projects. */

int ledPin5 = 5;                // bottom LED connected to pin 5
int ledPin6 = 6;                // 2nd from bottom LED connected to pin 6
int ledPin9 = 9;                // 3rd from bottom LED conneted to pin 9
int ledPin10 = 10;              // 4th from bottom LED connected to pin 10
int ledPin11 = 11;              // top LED connected to pin 11
int ledPin13 = 13;              // board LED

void setup(){
}

void loop() {                                                                                                                           
  // LED 5
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(ledPin5, fadeValue);
    delay(7);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledPin5, fadeValue);
    delay(7);
  }

  // LED 6
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(ledPin6, fadeValue);
    delay(7);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledPin6, fadeValue);
    delay(7);
  }

  // LED 7
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(ledPin9, fadeValue);
    delay(7);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledPin9, fadeValue);
    delay(7);
  }

  // LED 10
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(ledPin10, fadeValue);
    delay(7);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledPin10, fadeValue);
    delay(7);
  }

  // LED 11
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(ledPin11, fadeValue);
    delay(7);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledPin11, fadeValue);
    delay(20);
  }
}

