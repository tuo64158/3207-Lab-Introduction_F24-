#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar ()
{
    int randNum = rand() % (90 - 65 + 1) + 65;
    return randNum;
}