/*
 * ledControl.cpp
 */

#include"led.h"
#include"Arduino.h"


led::ledControl(byte pNum,bool stat):pin(p)
{
   
   pinMode(pin,OUTPUT);
   digitalWrite(pin,stat);
}

ledControl::~ledControl()
{
    releasePin();
} 

         
void led::on()
{
    digitalWrite(pin,HIGH);
}

void led::off()
{
   digitalWrite(pin,LOW);
}

bool led::getStat()
{
    return digitalRead(pin);
}

void led::releasePin()
{
    digitalWrite(pin,LOW);
    pinMode(pin,INPUT);
}
