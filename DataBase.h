#include <stdio.h>
#include <string.h>
#include "file.h"

typedef char** _Data;

typedef struct
{
	_Data Adres;
	int LinCount;
} DataBase;

_Data Create_Data_Base(int Columns)
{
	_Data Dat1 = (_Data)malloc(sizeof(string));

	return Dat1;
}

void Free_Data(DataBase *DB)
{
	int i = 0;
	for (; i < DB->LinCount; i++)
		free(DB->Adres[i]);
	free(DB->Adres);
}

int Print_DB_Line(int Num, DataBase *DB)
{
	if (Num>DB->LinCount){
		printf("ERROR: Wrong number\n");
		return 0;
	}
	printf("String number %d:\n%s", Num, DB->Adres[Num - 1]);
	return 1;
}

int Add_ToDB_Strings(DataBase *DB, int Count)
{
	DB->LinCount += Count;
	DB->Adres = (_Data)realloc(DB->Adres, DB->LinCount*sizeof(string));
}
