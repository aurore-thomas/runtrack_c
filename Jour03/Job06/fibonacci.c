#include <unistd.h>
#include "malloc.h"

int my_strlen(char *str);
int my_atoi(char *str);
char *my_itoa(int n);
int fibonacci_number(int n);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 0;
    }
    int number = my_atoi(argv[1]);

    int fibonacci = fibonacci_number(number);
    write(1, my_itoa(fibonacci), my_strlen(my_itoa(fibonacci)));
    return 0;
}

int fibonacci_number(int n) {
    int zero = 0, one = 1, next;
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = zero + one;
            zero = one;
            one = next;
        }
    }
    return one;
}

char *my_itoa(int n) {
    int i = 0;
    int is_negative = 0;

    if (n < 0) {
        is_negative = 1;
        n = -n;
    }

    int nb_chiffres = n;
    while(nb_chiffres != 0) {
        nb_chiffres /= 10;
        i++;
    }

    int last_i = i;
    char *int_to_str = (char*) malloc(((i + is_negative)) * sizeof (char));

    while (i>=0) {

        int_to_str[is_negative + i - 1] = (char)((int)(n % 10) + '0');
        n /= 10;
        i--;
    }

    int_to_str[last_i] = '\0';

    return int_to_str;
}

int my_atoi(char *str) {
    int i = 0;
    int char_to_int = 0;

    while (str[i] != '\0') {
        char_to_int = char_to_int * 10 + (str[i] - '0');
        i++;
    }
    return  char_to_int;
}

int my_strlen(char *str) {
    int count = 0;

    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}