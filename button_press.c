#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define button GPIO_NUM_5
#define led GPIO_NUM_2

void app_main() {
  gpio_set_direction(button,GPIO_MODE_INPUT);
  gpio_set_direction(led,GPIO_MODE_OUTPUT);
  //gpio_pullup_en(button);
  gpio_set_pull_mode(button,  GPIO_PULLUP_ONLY);
  while (true) {
    int value = gpio_get_level(button);
    int led_value = gpio_get_level(led);
    
    if(value == 0){
      printf("The switch is on\n");
      gpio_set_level(led, 1);
    }else{
      printf("The switch is off\n");
      gpio_set_level(led, 0);
    }
    
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

