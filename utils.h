#include <stdio.h>

#define MAX_LINE 256

int checkIfFileExists(char *path);
int lineCounter(FILE *dictionary);
char* getLine(FILE *dictionary, int line);
int getRandomNumber(int min, int max);
