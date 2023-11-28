#include <unistd.h>
#include <stdlib.h>
#include "..\Job04\my_strcpy.c"
#include "..\Job02\my_strlen.c"

char *my_strdup(char *src) {
    return my_strcpy(malloc(my_strlen(src) + 1), src);
}

/* int main() {
    char *string1 = "Bonjour";
    my_strdup(string1);
    return 0;
} */
