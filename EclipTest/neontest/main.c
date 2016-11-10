/*
 * main.c
 *
 *  Created on: Nov 9, 2016
 *      Author: jaemunc
 */
#include <stdio.h>
#include <float.h>
#include <math.h>
//#include "/home/jaemunc/c-project/CExam/Turboc.h"
//#define MYNAME "Jae Mun Choi"

int main(void)
{//main-start
	float num1=0.0f;
	float num2=0.1f;

	//adding 0.1 for 10times
	//requires -std=c99 option in compiler setting
	for (int i=0; i<10; i++)
	{
		num1=num1+num2;

	}//for adding

	//Check for Machine Epsilon and compare
	if (fabsf(num1 - 1.0f) <= FLT_EPSILON)
		printf("%.15f: The value difference is smaller than Machine Epsilon\n", num1);
	else
		printf("%.15f: False!! error is huge ^^; \n", num1);

	return 0;
}//main-end

