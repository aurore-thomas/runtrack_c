#include <unistd.h>
#include <stdio.h>

int my_strcmp(char *s1, char *s2);

int main() {
    char *string_test_1 = "Bonjour";
    char *string_test_2 = "Bonjour";
    int result = 10;
    result = my_strcmp(string_test_1, string_test_2);
    printf("%d", result);
    return 0;
}

int my_strcmp(char *s1, char *s2) {
    int ascii_1 = 0;
    int ascii_2 = 0;

    while (*s1 != '\n' || *s2 != '\n') {
        ascii_1 = *s1;
        ascii_2 = *s2;

        if (ascii_1 > ascii_2) {
            return 1;
        } else if (ascii_2 > ascii_1) {
            return -1;
        } else {
            *s1++;
            *s2++;
        }
    }
    return 0;
}

