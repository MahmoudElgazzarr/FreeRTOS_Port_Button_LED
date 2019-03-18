



#include <FreeRTOS.h>
#include <stdint.h>
#include "task.h"
#include "LEDS.h"
#include "led_task.h"
#include "Button_Task.h"



void LED1_Blink()
{
    while(1)
    {
    led1_on();
    vTaskDelay(100);
    led1_off();
    vTaskDelay(100);
    }
}
void LED2_Blink()
{
    while(1)
    {
    led2_on();
    vTaskDelay(200);
    led2_off();
    vTaskDelay(200);
    }
}
void LED3_Blink()
{
    while(1)
    {
    led3_on();
    vTaskDelay(1000);
    led3_off();
    vTaskDelay(1000);
    }
}
void LED_Task()
{
    while(1)
    {
    if(Button_FLAG == 1)
    {
        led1_on();
    }
    else
    {
        led1_off();
    }
    vTaskDelay(50);
    }
}
void LEDS_Task_init()
{
    while(1)
    {
    LEDS_PORT_init();
    led1_init();
    led2_init();
    led3_init();
    vTaskSuspend(NULL);
    }
}
