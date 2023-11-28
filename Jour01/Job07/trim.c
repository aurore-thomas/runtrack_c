#include <unistd.h>
#include <stdlib.h>
#include "..\Job02\my_strlen.c"

char *trim(char *str);

int main() {
    char *test = "    Bonjour      ";
    char *result = trim(test);
    write(1, result, my_strlen(result));
    return 0;
}

char *trim(char *str) {
    int count_begin_str = 0;
    int count_end_str = my_strlen(str);
    char *str_dest = malloc(sizeof (char) * my_strlen(str));

    while (str[count_begin_str] == ' ' || str[count_begin_str] == '\t' || str[count_begin_str] == '\n') {
        count_begin_str++;
    }

    while (str[count_end_str] == ' ' || str[count_end_str] == '\t' || str[count_end_str] == '\n') {
        count_end_str--;
    }

    for (int i = count_begin_str, j = 0; i <= count_end_str; i++, j++) {
        str_dest[j] = str[i];
    }

    return str_dest;
}