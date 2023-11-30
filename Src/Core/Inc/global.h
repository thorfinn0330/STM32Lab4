/*
 * global.h
 *
 *  Created on: Nov 13, 2022
 *      Author: HP
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <stdint.h>

#define ERROR_SCH_TOO_MANY_TASKS		1
#define RETURN_NORMAL 					2
#define ERROR_SCH_CANNOT_DELETE_TASK 	3
#define RETURN_ERROR					4

extern uint8_t Error_code_G;
extern uint32_t status;
#endif /* INC_GLOBAL_H_ */
