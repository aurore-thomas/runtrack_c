#include <unistd.h>
#include <stdio.h>


int my_strlen(char *str) {
    int count = 0;

    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}

/* int main() {
    char *string_test = "Hello";
    int result = 0;
    result = my_strlen(string_test);
    printf("%d", result);
    return 0;
} */