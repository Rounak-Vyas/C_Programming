#include "LedUtility.h"

LED_t led_state = LED_OFF;

void led_on(void)
{
    led_state = LED_ON;
}

void led_off(void)
{
    led_state = LED_OFF;
}

LED_t led_get_state(void)
{
    return led_state;
}