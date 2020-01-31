#include "/rc-switch/RCSwitch.h"
#include <stdlib.h>
#include <stdio.h>
 
int main(int argc, char *argv[]) {
    int PIN = 11; // siehe wiring Pi Belegung
 
    if (wiringPiSetup() == -1) return 1;
 
    RCSwitch mySwitch = RCSwitch();
    mySwitch.enableTransmit(PIN);
    mySwitch.send(atoi(argv[1]), 24);
    return 0;
}
