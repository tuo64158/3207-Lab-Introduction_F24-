//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include <random.h>

char* rand_string_alloc(size_t size);

int main()
{

//

}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}
