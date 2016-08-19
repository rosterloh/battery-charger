#include "mbed.h"
//#include "rtos.h"
#include "SSD1308.h"

Serial pc(USBTX,USBRX);
DigitalOut led1(LED1);
I2C i2c2(PB_3, PB_10);
SSD1308 oled = SSD1308(i2c, SSD1308_SA0);

int main(int argc, char **argv) {
  i2c2.frequency(400000);
  pc.printf("Battery Charger: start\n");

  while (1) {
    led1 = !led1;
    Thread::wait(500);
  }
}
