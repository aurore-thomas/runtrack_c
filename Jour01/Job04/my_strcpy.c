#include <unistd.h>

char *my_strcpy(char *dest, char *source) {
    char *tmp = dest;
    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }

    *dest = '\0';
    return tmp;
}

/* int main() {
    char *string1 = "Hello";
    char string2[50];
    my_strcpy(string2, string1);
    write(1, string2, 7);
    return 0;
}*/
