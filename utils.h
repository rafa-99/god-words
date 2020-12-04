#include <stdio.h>

#define MAX_LINE 256

int checkIfFileExists(char *path);
int numerize(char *string);
int lineCounter(FILE *dictionary);
char* getLine(FILE *dictionary, int line);
int getRandomNumber(int min, int max, char *question);
