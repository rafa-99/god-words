#include <stdio.h>

#define MAX_LINE 256

/* Checks if a file exists */
int checkIfFileExists(char *path);
/* Turns a string into a number by
 * using the sum of its ascii values.
 */
int numerize(char *string);
/* Counts the lines from a dictionary file */
int lineCounter(FILE *dictionary);
/* Returns a specified line from a dictionary file */
char* getLine(FILE *dictionary, int line);
/* Returns a random number within the inclusive number range
 * and based on the inputted question.
 * Uses a fast seeded number generator.
 */
int getRandomNumber(int min, int max, char *question);
