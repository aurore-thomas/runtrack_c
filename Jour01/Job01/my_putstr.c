#include "my_putchar.c"

void my_putstr(char *str) {
    while(*str != '\0') {
        my_putchar(*str);
        *str++;
    }
}

int main() {
    char *string_test = "Hello World !";
    my_putstr(string_test);
    return 0;
}