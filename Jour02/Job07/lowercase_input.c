#include <unistd.h>
#include <stdlib.h>
#include "malloc.h"

void to_lower(char *str);

int main(int argc, char *argv[]) {

    return 0;
}

void to_lower(char *str)
{
    while(*str != '\0')
    {
        if(*str >=65 && *str<=90)
        {
            // It fails in the below assignment
            *str = *str + 32;
        }
        str++;
    }
}