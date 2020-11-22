#include <stdio.h>
#include <stdlib.h>
#include "session.h"

void startSession(FILE *dictionary)
{
	if ( dictionary != NULL )
	{
		int totalWords = lineCounter(dictionary);
		char* word = (char *) calloc(256, sizeof(char));
		char reload;

		while( reload != 'q' )
		{
			word = getLine(dictionary, getRandomNumber(1, totalWords));
			printf("%s\n", word);
			free(word);
			//reload = getchar();
			//getchar();
		}
	}
}
