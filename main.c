#include <stdio.h>
#include <stdlib.h>

#include "file.h"


void main()
{
	string a;
	a = EnterStr(NULL);
	PrintStrin(a);
	PrintToFile("TextFiles/Tent.txt", a);
}
