#include <stdio.h>
#include <malloc.h>

typedef char* string;
typedef char** _Data;
typedef struct
{
	_Data Adres;
	int Lins;
} DataBase;

string EnterStr(string Dep)
{
	int i = 0, len = 15;
	char c;
	string Str = (string)malloc(len * sizeof(char));
	printf("Please, enter your string\nPlease, end it with \";\"\n");
	while ((c = getchar()) != ';')
	{
		if (i >= len)
		{
			len += len;
			Str = (string)realloc(Str, len*sizeof(char));
		}
		Str[i++] = c;
	}
	Str[i] = '\0';
	printf("\n");
	free(Dep);
	return Str;
}

void PrintStrin(string Str)
{
	printf("Your string:\n(%s)\n\n", Str);
}

int PrintToFile(string NOF, string Str)
{
	int i = 0;
	char c;
	if (fopen(NOF, "r") == NULL){
		printf("ERROR: File \"%s\" does not exist, do you want to create if?\n1 - yes, 0 - no\n\n", NOF);
		while ((c = getchar()) != '1' && c != '0');
		c -= '0';
		if (c == 0)
			return 0;
	}
	FILE *f = fopen(NOF, "w");
	if (f == NULL)
	{
		printf("File \"%s\" is not created\n", NOF);
		return 0;
	}
	else
		printf("File \"%s\" is created\n", NOF);
	if (fprintf(f, Str) < 0)
		printf("Operation failed\n");
	else
		printf("Operation succeeded");
	/*while (Str[i] != '\0')
		fputc((int)Str[i++], f);*/
	fclose(f);
}
