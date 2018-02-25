#ifndef _NUMBERS_H
#define _NUMBERS_H

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

typedef char* number;
typedef char* string;

typedef struct
{
	number Int;
	number Fract;
	int Int_Len;
	int Fract_Len;
	string Name;
}Number;

void PrintNum(Number Num);
Number EnterNum(Number Dep);
Number NumberSumm(Number Num1, Number Num2);

#endif
