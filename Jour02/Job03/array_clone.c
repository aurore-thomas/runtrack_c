#include <unistd.h>
#include <stdio.h>
#include "malloc.h"

char **array_clone(char **strs, int n);

int main() {
    char *strs[] = {"Joel", "Yoan", "Marin", "Enzo", "Leo", "Remi"};
    char **output = array_clone(strs, 4);
    for (int i=0; output[i]; i++) {
        printf("%s\n", output[i]);
        free(output[i]);
    }
    free(output);
    return 0;
}

int my_strlen(char *str) {
    int count = 0;

    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}

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

char *my_strdup(char *src) {
    return my_strcpy(malloc(my_strlen(src) + 1), src);
}

char **array_clone(char **strs, int n) {
    char **new_array = (char **) malloc(sizeof (char *) * (n+1));
    int i;

    for (i=0; i<n; i++) {
        if (strs[i] == NULL) {
            new_array[i] = NULL;
            return new_array;
        } else {
            new_array[i] = my_strdup(strs[i]);
        }
    }
    new_array[i] = NULL;
    return  new_array;
}

