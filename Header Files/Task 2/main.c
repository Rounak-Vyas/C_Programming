#include <stdio.h>
#include "LedUtility.h"

int main(void)
{
    led_on();

    if (led_get_state() == LED_ON)
        printf("LED is ON\n");

    led_off();

    if (led_get_state() == LED_OFF)
        printf("LED is OFF\n");

    return 0;
}