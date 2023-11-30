/*
 * scheduler.h
 *
 *  Created on: Nov 20, 2023
 *      Author: PC
 */
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct{
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;
} sTasks;

#define SCH_MAX_TASKS 40
#define NO_TASK_ID 0

void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint32_t SCH_Add_Task(void(*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
uint8_t SCH_Delete_Task(uint32_t TASK_INDEX);
extern sTasks SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Go_To_Sleep(void);
void SCH_Report_Status(void);

#endif /* INC_SCHEDULER_H_ */
