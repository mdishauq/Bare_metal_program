#include<stdint.h>
#include<stdio.h>

//registers used
uint32_t *AHB1ENR=(uint32_t*)0x40023830;
uint32_t *APB2ENR=(uint32_t*)0x40023844;
uint32_t *MODER=(uint32_t*)0x40020000;
uint32_t *ADC_CR2=(uint32_t*)0x40012008;
uint32_t *ADC_SQR3=(uint32_t*)0x40012034;
uint32_t *ADC_SR=(uint32_t*)0x40012000;
uint32_t *ADC_DR=(uint32_t*)0x4001204c;
uint16_t analogvalue;


void ADC1();
void delay();

void ADC1(){
	*AHB1ENR |=(1<<0);//enabling gpio pin pa1(adc1_1)
	*APB2ENR |=(1<<8);//adc1 enabling
	*MODER|=(1<<3)|(1<<2);//gpio pa1 mode to adc
	*ADC_CR2&=(0>>0);//clearing the register before reseting
	*ADC_SQR3 |=1;//selecting the channel(channel 1) before we ON adc
	*ADC_CR2|=(1>>0);//seting the adc ON
}

void delay(){
	for(uint32_t i=0;uint32_t i<3000000;i++);
}

int main(void){

	ADC1();
	while(1){
		*ADC_CR2 |=(1<<30);//convertion is started
		while(!(*ADC_SR&(1<<1))){//this loops ends once the eoc get 1(which means end of converstion)


		}
		analogvalue=*ADC_DR;//storing the data from data register of adc
		printf("display ADC value %d\n",analogvalue);
		delay();
	}


}
