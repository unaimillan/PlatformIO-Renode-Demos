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
  Serial.printf("Random number: %d\n", randomNumber);

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
  unsigned int ch12 = analogRead(A12);

  Serial.printf("Analog values: %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x\n",
                ch0, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11, ch12);

  delay(100);
}
