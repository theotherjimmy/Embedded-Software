#include "pin.h"

#define delay(x)      SysCtlDelay(SysCtlClockGet() / 3 * x);

int main(void)
{
    // Clock (80MHz)
    SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

    // Setup Red Led
    Pin led = Pin(PF1);
    led.setDir(OUT);

    while(1){
        led.toggle();
        delay(1);
    }
}
