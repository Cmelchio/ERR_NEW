#include <AFMotor.h>

#include <Adafruit_GPS.h>

//Input Pins connecting RPi
const int forwardPin = 4, reversePin = 5, leftPin = 6, rightPin = 7;

//Only Pins with Interrupts Available on the Uno
const int initPin = 2 , stopPin = 3;

int allPins = PINB;
volatile int pins = digitalRead(allPins);

volatile byte initFlag = LOW;
volatile byte stopFlag = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Set Pins to Input with Pull Up Resistor
  pinMode(forwardPin, INPUT_PULLUP);
  pinMode(reversePin, INPUT_PULLUP);
  pinMode(leftPin, INPUT_PULLUP);
  pinMode(rightPin, INPUT_PULLUP);
  
  pinMode(initPin, INPUT_PULLUP); 
  pinMode(stopPin, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(initPin), initSys, HIGH);
  attachInterrupt(digitalPinToInterrupt(stopPin), stopSys, HIGH);

 
}

void loop() {
  while(initFlag  !=  HIGH) {
    //
  }

  switch(pins) {
    case  0:
      //DO NOTHING
    case  4:
      Forward();
  }
    
      

}

void  initSys () {
  initFlag  = HIGH;
}

void  stopSys ()  {
  initFlag  = LOW;
  stopFlag  = HIGH;
}
int Forward() {
  //TODO
}

int Reverse() {
  //TODO
}

int Left() {
  //TODO
}

int Right() {
  //TODO
}
