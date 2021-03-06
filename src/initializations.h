#include "Default.h"

#ifndef ININT_H_
#define ININT_H_

extern int gTemp;
extern int g_for_0;	// Temporary Global variable used for for-loop
extern int g_for_1;	// Temporary Global variable used for for-loop
extern int g_for_2;	// Temporary Global variable used for for-loop

#define TRUE	1
#define FALSE	0
#define PASS	TRUE
#define FAIL	FALSE

void Testing_inWhileLoop(void);
void Testing_noWhileLoop(void);
void HardwareInitializations(void);
char* itoa( int );


#if SYSTICK_TIMER
void SYSTICK_init(void);				// Declaration :: System Timer Initialization
#endif //#if SYSTICK_TIMER 

#if RGBLED
void RGBLED_init(void); 				// Declaration :: RGB_LED Initialization
#endif //#if RGBLED

#if UART
void UART_init(void);
void UART_IO_init(void);
void UART_printf(char *);
#endif //#if UART

#if LED2
void LED2_init(void); // Initialize LED2
#endif

#if PBUTTON_4
void PButton4_init(void); //Initialize SW4
#endif

#if PBUTTON_3
void PButton3_init(void); //Initialize SW4
#endif

#if JOYSTICK
void JoyStick_init(void);
#endif

#if SPI
void SPI_init(void);
void SPI_IO_init(void);
void SPI_SendData(int Send_Data);
int SPI_ReceiveData(void);
#define M_Enable_CS		LPC_GPIO2->FIOCLR|=(1<<2)
#define M_Disable_CS	LPC_GPIO2->FIOSET|=(1<<2)
#endif

#if SEVEN_SEGMENT
//char Codes[10] = {0xAF, 0xE0, 0x24, 0xA2, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77};		//Characters are not correct!
void Seven_Segment_init(void);
#endif

#if I2C
void I2C_IO_init(void);
void I2C_init(void);
int I2C_Start(void);
void I2C_Stop(void);
int I2C_SendByte(int );
int I2C_GetByte(int );
#endif

#endif //if INIT_H

