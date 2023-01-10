/*
 * _7_seg_config.h
 *
 * Created: 1/8/2021 11:47:44 PM
 *  Author: mostafa gomaa
 */ 


#ifndef SEG_CONFIG_H_
#define SEG_CONFIG_H_

#include "ATMEGA32_REGISTERS.h"
#include "DIO.h"

#define EN_PORT           DIO_PORTB

#define EN1_PIN           DIO_PIN2
#define EN2_PIN           DIO_PIN1

#define DATA_PORT         DIO_PORTA

#define DATA_PORT_VAL     PORTA

#define DATA_PINA         DIO_PIN4
#define DATA_PINB         DIO_PIN5
#define DATA_PINC         DIO_PIN6
#define DATA_PIND         DIO_PIN7

#define MODE              DCB_MODE

#endif /* 7-SEG_CONFIG_H_ */