#include <unistd.h>
#include <stdio.h>
#include "malloc.h"

char *my_itoa(int n);

int main() {
    int number = 12345;
    char *str = my_itoa(number);
    write(1, str, sizeof(str));
    return 0;
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

        int_to_str[is_negative + i - 1] = (n % 10) + '0';
        n /= 10;
        i--;
    }

    int_to_str[last_i] = '\0';

    return int_to_str;
}