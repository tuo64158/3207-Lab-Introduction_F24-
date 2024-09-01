//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char* rand_string_alloc(size_t size);
void rand_string(char*s, size_t size);

int main()
{
	int a;

	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

void rand_string(char* str, size_t size){
    for (size_t i = 0; i < 7; ++i)
    {
        str[i] = randchar();
    }
}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}