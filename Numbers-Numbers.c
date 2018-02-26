#ifndef _NUMBERS_C
#define _NUMBERS_C
#include "Numbers.h"

void PrintNum(Number Num)
{
	if (Num.Fract[0] == '\0'){
		printf("%s\n", Num.Int);
		return;
	}
	printf("%s.%s\n", Num.Int, Num.Fract);
}

Number EnterNum(Number Dep)
{
	int i = 0, j = 0, len = 10;
	char c;
	Number Num = { NULL, NULL, 0, 0 };
	Num.Int = (number)malloc(len*sizeof(char));
	Num.Fract = (number)malloc(len*sizeof(char));
	printf("Please, enter your number\n");
	while ((c = getch()) == '0');
	if (('0' <= c && c <= '9')){
		putch(c);
		Num.Int[i++] = c;
	}
	while ((c = getch()) != '.' && c != '\n')
	{
		if (i >= len)
		{
			len += len;
			Num.Int = (number)realloc(Num.Int, len*sizeof(char));
		}
		if (('0' <= c && c <= '9')){
			putch(c);
			Num.Int[i++] = c;
			Num.Int_Len++;
		}
		else if (c == '.'){
			putch(c);
			break;
		}
	}

	while ((c = getchar()) != '\n')
	{
		if (j >= len)
		{
			len += len;
			Num.Fract = (number)realloc(Num.Fract, len*sizeof(char));
		}
		if ('0' <= c && c <= '9'){
			//putch(c);
			Num.Fract[j++] = c;
		}
	}
	Num.Int[i] = '\0';
	Num.Fract[j] = '\0';
	printf("\n");
	free(Dep.Int);
	free(Dep.Fract);

	return Num;
}

Number NumberSumm(Number Num1, Number Num2)
{
	return Num1;
}


#endif
