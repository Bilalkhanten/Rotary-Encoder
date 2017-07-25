// -----
// RotaryEncoder.h - Library for using rotary encoders.
// This class is implemented for use with the Arduino environment.
// Copyright (c) by Bilal Khan, http://www.Bilalkhanten.com
// This work is licensed under a BSD style license. See http://www.Bilalkhanten.com/license.aspx
// -----
// 18.01.2014 created by Bilal Khan
// -----

#ifndef Encoder_h
#define Encoder_h

#include "Arduino.h"

#define LATCHSTATE 3

class RotaryEncoder
{
public:
  // ----- Constructor -----
  RotaryEncoder(int pin1, int pin2);
  
  // retrieve the current position
  long  getPosition();

  // adjust the current position
  void setPosition(long newPosition);

  // call this function every some milliseconds or by using an interrupt for handling state changes of the rotary encoder.
  void tick(void);

private:
  int _pin1, _pin2; // Arduino pins used for the encoder. 
  
  int8_t _oldState;
  
  long _position;     // Internal position (4 times _positionExt)
  long _positionExt;  // External position
};

#endif

// End
