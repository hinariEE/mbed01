#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
      for (int i=0; i<6; ++i)
      {
          myLED2 = !myLED2;
          ThisThread::sleep_for(100ms);
      }
      for (int i=0; i<4; ++i)
      {
          myLED = !myLED;
          ThisThread::sleep_for(100ms);
      }
      ThisThread::sleep_for(200ms);
   }
}
