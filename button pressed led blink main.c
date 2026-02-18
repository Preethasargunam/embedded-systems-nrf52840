#include "nrf_gpio.h"

#include "nrf_delay.h"
 
#define LED1_PIN      13

#define BUTTON1_PIN   11
 
int main(void)

{

    // Configure LED as output

    nrf_gpio_cfg_output(LED1_PIN);
 
    // Configure Button as input with pull-up

    nrf_gpio_cfg_input(BUTTON1_PIN, NRF_GPIO_PIN_PULLUP);
 
    while (1)

    {

        if (nrf_gpio_pin_read(BUTTON1_PIN) == 0)  // Button pressed (active LOW)

        {

            nrf_gpio_pin_clear(LED1_PIN);  // LED ON (active low)

        }

        else

        {

            nrf_gpio_pin_set(LED1_PIN);    // LED OFF

        }

    }

}

 
