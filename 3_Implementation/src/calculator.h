/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALC_H__
#define __CALC_H__

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
*  adds the operand1 and operand2 and returns the result
* @param[in] x
* @param[in] y
* @return Result of operand1 + operand2
*/
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int divi(int x,int y);
int mod(int x,int y);
int fact(int x);
int max(int x,int y)
int min(int x,int y);
void operations();


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
