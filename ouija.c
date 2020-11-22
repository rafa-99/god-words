#include "logic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *dictionary = (char *)calloc(MAX_LINE, sizeof(char));

	switch (argc)
	{
	case 1:
		if (checkIfFileExists("dictionary.dict") == 0)
		{
			strcpy(dictionary, "dictionary.dict");
		}
		break;
	case 2:
		if (checkIfFileExists(argv[1]) == 1)
		{
			strcpy(dictionary, argv[1]);
		}
	}

	if (dictionary != NULL)
	{
		char *string = getLine(dictionary, getRandomNumber(1, lineCounter(dictionary)));
		free(dictionary);
	}

	return 0;
}
