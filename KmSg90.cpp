//*******1*********2*********3*********4*********4*********5*********6*********7*********8
#include "Arduino.h"
#include "KmSg90.h"

KmSg90::KmSg90(int pout, int debug){
  PinOut=pout; Debug=debug;
}

void KmSg90::begin(){
  pinMode(PinOut, OUTPUT);
  analogWriteFreq(50);
  if(Debug){
    Serial.println("SG90 Servo Mortor Drive");
    analogWrite(PinOut, 25);
    delay(1000);
    analogWrite(PinOut, 74);
    delay(1000);
    analogWrite(PinOut, 123);
    delay(1000);
    analogWrite(PinOut, 74);
  }
}

//##### play
//##### playコマンドの分解
void KmSg90::position(int deg){
  int a=74+(deg*49/90); analogWrite(PinOut, a);
  Serial.print("Positioning:"); Serial.print(deg);
}
