/* ATtiny85 - 1 Mhz - Internal Oscillator

KiK (Brigade Neurale)

http://www.cargocollective.com/kik

*/

int sensorPin = 3;    // select the input pin for the mic
int led1 = 0;
int led2 = 1;


int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);
  
}

void loop() {
  sensorValue = analogRead(sensorPin);    
  
  if (sensorValue > 300) {
  int pwmVal = map(sensorValue, 300, 430, 0, 127);
    analogWrite(led1, pwmVal);
    analogWrite(led2,pwmVal);
   delay(20);
  }
  else {
  analogWrite(led1, 0);  
  analogWrite(led2, 0);
}
}
