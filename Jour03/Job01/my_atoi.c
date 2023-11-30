#include <unistd.h>
#include <stdio.h>

int my_atoi(char *str);

/*int main() {
    char test[] = "1234589";
    printf("%d ", my_atoi(test));
    return 0;
}*/

int my_atoi(char *str) {
    int i = 0;
    int char_to_int = 0;

    while (str[i] != '\0') {
        char_to_int = char_to_int * 10 + (str[i] - '0');
        i++;
    }
    return  char_to_int;
}