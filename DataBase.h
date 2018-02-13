#include <stdio.h>
#include <string.h>

#include "file.h"

_Data CreateDataBase(int Columns)
{
	_Data Dat1 = (_Data)malloc(sizeof(string));

	return Dat1;
}

void FreeData(DataBase *DB)
{
	int i = 0;
	for (; i < DB->Lins; i++)
		free(DB->Adres[i]);
	free(DB->Adres);
}

void PrintLine(int Num)
{

}
