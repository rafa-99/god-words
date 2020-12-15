#include <stdio.h>
#include <stdlib.h>
#include "session.h"
#include "utils.h"

int main(int argc, char **argv)
{

	FILE *dictionary = NULL;

	switch (argc)
	{
		case 1:
			if (checkIfFileExists("dictionary.dict") == 0)
			{
				dictionary = fopen("dictionary.dict", "r");
			}
			break;
		case 2:
			if (checkIfFileExists(argv[1]) == 0)
			{
				dictionary = fopen(argv[1], "r");
			}
	}

	if (dictionary != NULL)
	{
		startSession(dictionary);
		fclose(dictionary);
	}
	else
	{
		printf("No Dictionary Found\n");
	}

	return 0;
}
