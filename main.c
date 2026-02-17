#include <stdint.h>
#include <stdbool.h>
#include "boards.h"
#include "nrf_delay.h"

int main(void)
{
    // Initialize LEDs
    bsp_board_init(BSP_INIT_LEDS);

    while (1)
    {
        bsp_board_led_on(0);   // Turn ON LED1
        nrf_delay_ms(500);     // 500ms delay

        bsp_board_led_off(0);  // Turn OFF LED1
        nrf_delay_ms(500);     // 500ms delay
    }
}
