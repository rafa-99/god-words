#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
startSession (FILE *dictionary)
{
	if (dictionary != NULL)
	{
		int totalWords = lineCounter (dictionary);
		char *word, *question = (char *)calloc (MAX_LINE, sizeof (char));
		char reload = '\0';

		printf ("WELCOME\n"
				"Type something to get an answer\n"
				"Type GOODBYE to exit\n\n");

		while (strcmp (question, "GOODBYE\n") != 0)
		{
			fgets (question, MAX_LINE, stdin);

			if (strcmp (question, "GOODBYE\n") != 0)
			{
				word = getLine (dictionary,
						getRandomNumber (1, totalWords, question));
				printf ("-> %s", word);
				free (word);
			}
		}

		free (question);
	}
}
