//*******1*********2*********3*********4*********4*********5*********6*********7*********8
#include "Arduino.h"
/* ir.h */
#ifndef KMSG90_H
#define KMSG90_H

class KmSg90{
  public:
    KmSg90(int pout, int debug);
    void begin();
    void position(int deg);
    int PinOut;

  private:
    int Debug;
};

#endif
