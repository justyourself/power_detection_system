#ifndef __USART3_H
#define __USART3_H	 
#include "sys.h"  
#include "stdio.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F7开发板
//串口3初始化		   
//正点原子@ALIENTEK
//技术论坛:www.openedv.csom
//修改日期:2016/6/17
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 正点原子 2009-2019
//All rights reserved
//********************************************************************************
//V1.0修改说明 
////////////////////////////////////////////////////////////////////////////////// 	

#define USART3_MAX_RECV_LEN		400					//最大接收缓存字节数
#define USART3_MAX_SEND_LEN		400					//最大发送缓存字节数
#define USART3_RX_EN 			1					//0,不接收;1,接收.

extern u8  USART3_RX_BUF[USART3_MAX_RECV_LEN]; 		//接收缓冲,最大USART3_MAX_RECV_LEN字节
extern u8  USART3_TX_BUF[USART3_MAX_SEND_LEN]; 		//发送缓冲,最大USART3_MAX_SEND_LEN字节
extern u16 USART3_RX_STA;   						//接收数据状态

extern UART_HandleTypeDef UART3_Handler;//UART句柄
#define RXBUFFERSIZE3   1 //缓存大小
extern u8 aRxBuffer3[RXBUFFERSIZE3];//HAL库USART接收Buffer

void uart3_init(u32 bound);				//串口3初始化 
void u3_printf(char* fmt, ...);

#endif



