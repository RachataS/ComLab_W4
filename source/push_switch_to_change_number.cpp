
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#define a 23
#define b 22
#define c 1
#define d 3
#define e 21
#define f 19
#define g 18
#define bt1 32
uint32_t delay = 1000000;
int LED_mode = 0;

void zero(){
	gpio_set_level(a,1);
	gpio_set_level(b,1);
	gpio_set_level(c,1);
	gpio_set_level(d,1);
	gpio_set_level(e,1);
	gpio_set_level(f,1);
	gpio_set_level(g,0);
}

void one(){
	gpio_set_level(a,0);
	gpio_set_level(b,1);
	gpio_set_level(c,1);
	gpio_set_level(d,0);
	gpio_set_level(e,0);
	gpio_set_level(f,0);
	gpio_set_level(g,0);
}

void two(){
	gpio_set_level(a,1);
	gpio_set_level(b,1);
	gpio_set_level(c,0);
	gpio_set_level(d,1);
	gpio_set_level(e,1);
	gpio_set_level(f,0);
	gpio_set_level(g,1);
}

void three(){
	gpio_set_level(a,1);
	gpio_set_level(b,1);
	gpio_set_level(c,1);
	gpio_set_level(d,1);
	gpio_set_level(e,0);
	gpio_set_level(f,0);
	gpio_set_level(g,1);
}

void four(){
	gpio_set_level(a,0);
	gpio_set_level(b,1);
	gpio_set_level(c,1);
	gpio_set_level(d,0);
	gpio_set_level(e,0);
	gpio_set_level(f,1);
	gpio_set_level(g,1);
}

void five(){
	gpio_set_level(a,1);
	gpio_set_level(b,0);
	gpio_set_level(c,1);
	gpio_set_level(d,1);
	gpio_set_level(e,0);
	gpio_set_level(f,1);
	gpio_set_level(g,1);
}

void six(){
	gpio_set_level(a,1);
	gpio_set_level(b,0);
	gpio_set_level(c,1);
	gpio_set_level(d,1);
	gpio_set_level(e,1);
	gpio_set_level(f,1);
	gpio_set_level(g,1);
}

void seven(){
	gpio_set_level(a,1);
	gpio_set_level(b,1);
	gpio_set_level(c,1);
	gpio_set_level(d,0);
	gpio_set_level(e,0);
	gpio_set_level(f,1);
	gpio_set_level(g,0);
}
void eight(){
	gpio_set_level(a,1);
	gpio_set_level(b,1);
	gpio_set_level(c,1);
	gpio_set_level(d,1);
	gpio_set_level(e,1);
	gpio_set_level(f,1);
	gpio_set_level(g,1);
}

void nine(){
	gpio_set_level(a,1);
	gpio_set_level(b,1);
	gpio_set_level(c,1);
	gpio_set_level(d,1);
	gpio_set_level(e,0);
	gpio_set_level(f,1);
	gpio_set_level(g,1);
}

void app_main(void){
	gpio_reset_pin(a);
	gpio_reset_pin(b);
	gpio_reset_pin(c);
	gpio_reset_pin(d);
	gpio_reset_pin(e);
	gpio_reset_pin(f);
	gpio_reset_pin(g);

	gpio_set_direction(a,GPIO_MODE_OUTPUT);
	gpio_set_direction(b,GPIO_MODE_OUTPUT);
	gpio_set_direction(c,GPIO_MODE_OUTPUT);
	gpio_set_direction(d,GPIO_MODE_OUTPUT);
	gpio_set_direction(e,GPIO_MODE_OUTPUT);
	gpio_set_direction(f,GPIO_MODE_OUTPUT);
	gpio_set_direction(g,GPIO_MODE_OUTPUT);
	gpio_set_direction(bt1,GPIO_MODE_INPUT);

	while(1){
        if(gpio_get_level(bt1) == 0){
            LED_mode++;
        }
        switch(LED_mode){
            case 0:
                zero();
                if(gpio_get_level (bt1) == 0){
                    LED_mode++;
                    usleep(delay);
                 }
                 break;
            case 1:
                one();
                if(gpio_get_level (bt1) == 0){
                     LED_mode++;
                     usleep(delay);
                }
                break;
            case 2:
                two();
                if(gpio_get_level (bt1) == 0){
                     LED_mode++;
                     usleep(delay);
                }
            break;
                case 3:
                three();
                if(gpio_get_level (bt1) == 0){
                        LED_mode++;
                        usleep(delay);
                    }
                break;
            case 4:
                four();
                if(gpio_get_level (bt1) == 0){
                        LED_mode++;
                        usleep(delay);
                    }
                break;
            case 5:
                five();
                if(gpio_get_level (bt1) == 0){
                        LED_mode++;
                        usleep(delay);
                    }
                break;
            case 6:
                six();
                if(gpio_get_level (bt1) == 0){
                     LED_mode++;
                     usleep(delay);
                }
                break;
            case 7:
                seven();
                if(gpio_get_level (bt1) == 0){
                     LED_mode++;
                     usleep(delay);
                }
                break;
            case 8:
                eight();
                if(gpio_get_level (bt1) == 0){
                        LED_mode++;
                        usleep(delay);
                    }
                break;
            case 9:
            nine();
                if(gpio_get_level (bt1) == 0){
                     LED_mode++;
                     usleep(delay);
                }
                break;
                case 10:
                LED_mode = 0;
                break;
            default:
                zero();
        }
        usleep(150000);
}
}
