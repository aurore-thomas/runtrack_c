#include <unistd.h>
#include <stdio.h>

int str_is_digit(char *str) {
    int count = 0;
    int count_digit = 0;

    while (*str != '\0') {
        if( *str >= '0' && *str <= '9' ){
            count_digit++;
        }
        count++;
        *str++;
    }

    if (count == count_digit) {
        return 1;
    } else {
        return 0;
    }

}

int main() {
    char *test1 = "123";
    char *test2 = "Test";
    char *test3 = "Test123";
    printf("%d", str_is_digit(test1));
    printf("%d", str_is_digit(test2));
    printf("%d", str_is_digit(test3));
    return 0;
}