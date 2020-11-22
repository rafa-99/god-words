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
		char line[MAX_LINE];
		for( words; (!feof(dictionary)); words++ )
		{
			fgets(line, MAX_LINE, dictionary);
		}
		rewind(dictionary);
		words--;
	}
	return words;
}

char* getLine(FILE *dictionary, int lineNumber)
{
	char *line = (char *) calloc(MAX_LINE, sizeof(char));
	if ( dictionary != NULL )
	{
		for ( int i = 0; (!feof(dictionary) && i != lineNumber ); i++)
		{
			fgets(line, MAX_LINE, dictionary);
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
