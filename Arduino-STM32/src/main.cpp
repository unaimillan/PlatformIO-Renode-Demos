#include <Arduino.h>

String line = "";

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Setup successfully finished.");
}

void loop()
{

  unsigned short randomNumber = random(0xFFFF);
  // Serial.printf("Random number: %d\n", randomNumber);

  //A0 -> adc channel 12
  //A1 -> adc channel 14
  //A2 -> adc channel 8
  //A3 -> adc channel 11
  //A4 -> adc channel 13
  //A5 -> adc channel 1
  //A6 -> adc channel 15
  //A7 -> adc channel 9
  //A8 -> adc channel 2
  //A9 -> adc channel 3
  //A10 -> adc channel 4
  //A11 -> adc channel 5

  unsigned int ch0 = analogRead(A0);
  unsigned int ch1 = analogRead(A1);
  unsigned int ch2 = analogRead(A2);
  unsigned int ch3 = analogRead(A3);
  unsigned int ch4 = analogRead(A4);
  unsigned int ch5 = analogRead(A5);
  unsigned int ch6 = analogRead(A6);
  unsigned int ch7 = analogRead(A7);
  unsigned int ch8 = analogRead(A8);
  unsigned int ch9 = analogRead(A9);
  unsigned int ch10 = analogRead(A10);
  unsigned int ch11 = analogRead(A11);

  // Serial.printf("Analog values: %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x\n",
  //               ch0, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11);
  
  Serial.printf("ch0:%d\n", ch0);
  Serial.printf("ch1:%d\n", ch1);
  Serial.printf("ch2:%d\n", ch2);
  Serial.printf("ch3:%d\n", ch3);
  Serial.printf("ch4:%d\n", ch4);
  Serial.printf("ch5:%d\n", ch5);

  delay(10);
}
