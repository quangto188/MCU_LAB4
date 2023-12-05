/*
 * watchdog.h
 *
 *  Created on: Nov 30, 2023
 *      Author: quang
 */
extern IWDG_HandleTypeDef hiwdg;

void Watchdog_Refresh();
unsigned char Is_Watchdog_Reset(void);
void Watchdog_Counting(void);
void Reset_Watchdog_Counting(void);
