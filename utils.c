#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

int checkIfFileExists(char *path)
{
	return access(path, F_OK);
}

int lineCounter(FILE *dictionary)
{
	int words = 0;
	if ( dictionary != NULL )
	{
		char line[256];
		while ( !feof(dictionary) )
		{
			fgets(line, sizeof(line), dictionary);
			words++;
		}
		words--;
		rewind(dictionary);
	}

	return words;
}

char* getLine(FILE *dictionary, int lineNumber)
{
	char *line = (char *) calloc(256, sizeof(char));
	if ( dictionary != NULL )
	{
		for ( int i = 0; (!feof(dictionary) && i != lineNumber - 1); i++)
		{
			fgets(line, sizeof(line), dictionary);
		}
		rewind(dictionary);
	}
	return line;
}

int getRandomNumber(int min, int max)
{
	srand(time(0));
	return ((rand() % (max - min + 1)) + 1);
}
