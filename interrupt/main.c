#include<stdint.h>//fixed integer
#include<stdio.h>

uint32_t volatile *AHB1ENR = (uint32_t *)0x40020830;
uint32_t volatile *APB2ENR = (uint32_t *)0x40023844;
uint32_t volatile *SYSCFG_EXTICR4 = (uint32_t *)0x40013814;
uint32_t volatile *EXTI_FTSR = (uint32_t *)0x40013C0C;
uint32_t volatile *EXTI_IMR = (uint32_t *)0x40013C00;
uint32_t volatile *NVIC_ISER1 = (uint32_t *)0xE000E104;
uint32_t volatile *EXTI_PR = (uint32_t *)0x40013C14;


void pushbutton_interrupt(){
	*AHB1ENR |=(1<<2);//portc enable
	*APB2ENR |=(1<<14);//enable sysconfig
	*SYSCFG_EXTICR4 |=(1<<5);//enabling port13 as ext
	*EXTI_FTSR |= (1<<13);//falling edgetrigger pin13
	*EXTI_IMR |=(1<<13);//interrupt masking
	*NVIC_ISER1 |=(1<<8);//NVIC POSITION 40(ARM REF MANUAL)
}

int main(){
	pushbutton_interrupt();
	while(1){

	}

}

void EXTI15_10_IRQHandler(){//nvic position from startup file
	printf("button pressed");
	*EXTI_PR |=(1<<13);//pending cleared in set 1

}
