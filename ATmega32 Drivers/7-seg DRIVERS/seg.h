/*
 * _7_seg.h
 *
 * Created: 1/8/2021 11:48:27 PM
 *  Author: mostafa gomaa
 */ 


#ifndef _SEG_H_
#define _SEG_H_

#include "ATMEGA32_REGISTERS.h"
#include "DIO.h"
#include "common_macros.h"
#include "standard_types.h"
#include "seg_config.h"

#include<util/delay.h>

/* USING DECODER WITH THE 7-SEG */
#define DCB_MODE      0

/* USING THE 7-SEG DIRECT */
#define NORMAL_MODE   1

void SEG_INIT(void);

void SEG_DISPLAY(u_int8 num);

#endif /* 7-SEG_H_ */