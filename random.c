#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar ()
{
    int randNum = rand() % (90 - 65 + 1) + 65; // assigns randNum a random number between 90 and 65
    return randNum; // returns random number as a char from ascii table coorelating to letter of alphabet
}