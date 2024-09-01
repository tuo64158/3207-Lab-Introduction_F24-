//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char* rand_string_alloc(size_t size);

// provided code
int main()
{
	int a;

	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++) // iterates through desired number of letters
		putchar( randchar() ); // prints the random char from randChar to screen
	putchar('\n'); // new line

	return(0);
}// end main