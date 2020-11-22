#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "session.h"

void startSession(FILE *dictionary)
{
	if ( dictionary != NULL )
	{
		int totalWords = lineCounter(dictionary);
		char *word;
		char reload = '\0';

		while( reload != 'q' )
		{
			word = getLine(dictionary, getRandomNumber(1, totalWords));
			printf("%s", word);
			free(word);
			reload = getchar();
		}
	}
}
