/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Ahmed Mohamed Mohamed Hassanien        *************/
/**************************		Date:    27 JULY 2023	            			*************/
/**************************		Layer:   MCAL								   	*************/
/**************************		SWC:	 SYSTICK								*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/

/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_

/*
*Interval_t ENUM
*/
typedef enum
{
	Interval_Single,
	Interval_Periodic
}Interval_t;

typedef void (*STK_Callback_t)(void);


void STK_vInit();
void STK_vStartTimer(uint32_t copy_u32Ticks);
void STK_vStopTimer();
void STK_vSetBusyWait(uint32_t copy_u32Ticks);
void STK_vSetIntervalSingle(uint32_t copy_u32Ticks,STK_Callback_t copy_pSTK_Callback);
void STK_vSetIntervalPeriodic(uint32_t copy_u32Ticks,STK_Callback_t copy_pSTK_Callback);
void STK_vSetCallBack(STK_Callback_t copy_pSTK_Callback);
uint32_t STK_vGetElapsedTime();
uint32_t STK_vGetRemainingTime();


#endif
/********************************************************************************************/
/* END OF FILE: Systick_private.h                                                           */
/********************************************************************************************/
