#include<stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define pin GPIO_NUM_2

void app_main(void){

  
   gpio_set_direction(pin, GPIO_MODE_OUTPUT);
  while (true){
    printf("Pin level 0");
    gpio_set_level(pin, 0);
    vTaskDelay(500/portTICK_PERIOD_MS);
    printf("Pin level 1");
    gpio_set_level(pin,1);
    vTaskDelay(500/portTICK_PERIOD_MS);
  }
} 

