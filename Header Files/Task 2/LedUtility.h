typedef enum led {
    LED_OFF,  // Automatically set to 0 
    LED_ON,   // 0+1
}LED_t;

LED_t led_get_state(void);
void led_on(void);
void led_off(void);

