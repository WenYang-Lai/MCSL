#ifndef ONEWIRE_H_
#define ONEWIRE_H_

#include "stm32l476xx.h"

extern void delay();

typedef struct {
	GPIO_TypeDef* GPIO;   /*!< GPIOx port to be used for I/O functions */
	uint32_t GPIO_Pin;
} OneWire_t;


void OneWire_Init(OneWire_t* OneWireStruct, GPIO_TypeDef* GPIOx, uint32_t GPIO_Pin);
void OneWire_SkipROM(OneWire_t* OneWireStruct);
uint8_t OneWire_Reset(OneWire_t* OneWireStruct);
uint8_t OneWire_ReadByte(OneWire_t* OneWireStruct);
void OneWire_WriteByte(OneWire_t* OneWireStruct, uint8_t byte);
void OneWire_WriteBit(OneWire_t* OneWireStruct, uint8_t bit);
uint8_t OneWire_ReadBit(OneWire_t* OneWireStruct);


#endif /* ONEWIRE_H_ */
