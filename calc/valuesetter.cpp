#include <stdlib.h>

int valuesetterfunc(char *argv[], int &counter) //Sets the variables to a read in variable from argv
{
   //Returns the value from argv to the calling variable
   int value = 0;
   value = atoi(argv[counter]);
   counter++;
   return value;
}