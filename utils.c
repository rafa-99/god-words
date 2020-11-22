#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

int checkIfFileExists(char *path)
{
	return access(path, F_OK);
}

int lineCounter(char *dictionary)
{
	int words = 0;

	if ( dictionary != NULL && checkIfFileExists(dictionary) == 0)
	{
		char line[MAX_LINE];
		FILE *dictionaryFile;
		dictionaryFile = fopen(dictionary, "r");

		while ( !feof(dictionaryFile) )
		{
			fgets(line, sizeof(line), dictionaryFile);
			words++;
		}
		fclose(dictionaryFile);

		words--;
	}

	return words;
}

char* getLine(char *dictionary, int lineNumber)
{
	char *line = (char *) calloc(MAX_LINE, sizeof(char));
	if ( dictionary != NULL && checkIfFileExists(dictionary) == 0)
	{
		FILE *dictionaryFile;

		dictionaryFile = fopen(dictionary, "r");

		for ( int i = 0; (!feof(dictionaryFile) && i != lineNumber - 1); i++)
		{
			fgets(line, sizeof(line), dictionaryFile);
		}
		fclose(dictionaryFile);
	}
	return line;
}

int getRandomNumber(int min, int max)
{
	srand(time(0));
	return ((rand() % (max - min + 1)) + 1);
}
