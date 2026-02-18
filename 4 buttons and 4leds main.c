#include "nrf_gpio.h"
 
#define LED1 13

#define LED2 14

#define LED3 15

#define LED4 16
 
#define BTN1 11

#define BTN2 12

#define BTN3 24

#define BTN4 25
 
int main(void)

{

    // Configure LEDs as output

    nrf_gpio_cfg_output(LED1);

    nrf_gpio_cfg_output(LED2);

    nrf_gpio_cfg_output(LED3);

    nrf_gpio_cfg_output(LED4);
 
    // Configure Buttons as input with pull-up

    nrf_gpio_cfg_input(BTN1, NRF_GPIO_PIN_PULLUP);

    nrf_gpio_cfg_input(BTN2, NRF_GPIO_PIN_PULLUP);

    nrf_gpio_cfg_input(BTN3, NRF_GPIO_PIN_PULLUP);

    nrf_gpio_cfg_input(BTN4, NRF_GPIO_PIN_PULLUP);
 
    while (1)

    {

        // Button 1

        if (nrf_gpio_pin_read(BTN1) == 0)

            nrf_gpio_pin_clear(LED1);

        else

            nrf_gpio_pin_set(LED1);
 
        // Button 2

        if (nrf_gpio_pin_read(BTN2) == 0)

            nrf_gpio_pin_clear(LED2);

        else

            nrf_gpio_pin_set(LED2);
 
        // Button 3

        if (nrf_gpio_pin_read(BTN3) == 0)

            nrf_gpio_pin_clear(LED3);

        else

            nrf_gpio_pin_set(LED3);
 
        // Button 4

        if (nrf_gpio_pin_read(BTN4) == 0)

            nrf_gpio_pin_clear(LED4);

        else

            nrf_gpio_pin_set(LED4);

    }

}

 
