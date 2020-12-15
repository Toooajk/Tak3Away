/*
 * led.h
 * 
 */

#ifndef _LED_H_
#define _LED_H_
class led
{
   private:
     byte pin;
   public:
     ledControl(byte pNum, bool stat=LOW);
     ~ledControl;
     byte getPin;
     void on();
     void off();
     bool getStat();
     void releasePin();
};

 #endif
