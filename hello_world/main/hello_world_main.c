#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main()
{
  while(1) {
     printf("Restarting in %d seconds...\n", i);
     vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
    fflush(stdout);
}
