int ledArray[] = {5, 6, 9, 10, 11};
int arrayLength = 5;

void setup(){
  for(int count = 0; count < arrayLength; count ++) {
    digitalWrite(ledArray[count], HIGH);
    delay(10);
    digitalWrite(ledArray[count], LOW);
    delay(10);
  }

}

void loop(){   
  
  for (int count = 0; count < arrayLength; count ++) {
    int randLED = random(0, arrayLength);
    int randTime = random(0, 20);
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
      analogWrite(ledArray[randLED], fadeValue);
      delay(randTime);
    }
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
      analogWrite(ledArray[randLED], fadeValue);
      delay(randTime);
    }
  }                                                                                                           
}

