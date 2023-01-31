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
#define D1 32
#define D2 33

int i,j;

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

void display1(){
	gpio_set_level(D1,1);
	vTaskDelay(1);
	gpio_set_level(D2,0);
	vTaskDelay(1);
}

void display2(){
	gpio_set_level(D1,0);
	vTaskDelay(1);
	gpio_set_level(D2,1);
	vTaskDelay(1);
}

void app_main(void){
	gpio_reset_pin(a);
	gpio_reset_pin(b);
	gpio_reset_pin(c);
	gpio_reset_pin(d);
	gpio_reset_pin(e);
	gpio_reset_pin(f);
	gpio_reset_pin(g);
	gpio_reset_pin(D1);
	gpio_reset_pin(D2);

	gpio_set_direction(D1,GPIO_MODE_OUTPUT);
	gpio_set_direction(D2,GPIO_MODE_OUTPUT);
	gpio_set_direction(a,GPIO_MODE_OUTPUT);
	gpio_set_direction(b,GPIO_MODE_OUTPUT);
	gpio_set_direction(c,GPIO_MODE_OUTPUT);
	gpio_set_direction(d,GPIO_MODE_OUTPUT);
	gpio_set_direction(e,GPIO_MODE_OUTPUT);
	gpio_set_direction(f,GPIO_MODE_OUTPUT);
	gpio_set_direction(g,GPIO_MODE_OUTPUT);


while (true){
	for (i = 0;i<=9){
		
	}
}
}
