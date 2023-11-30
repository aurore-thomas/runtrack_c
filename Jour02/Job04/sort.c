#include <unistd.h>
#include <stdio.h>

char **sort(char **strs);
void print(char **array);
int my_strcmp(char *s1, char *s2);
int my_arraylen(char **array);

int main() {
    //char *strs[] = {"Google", "Google2", "IntelliJ", "CLion", "Desktop", "KaliLinux", NULL};
    char *strs[] = {"b", "a", NULL};
    char **output = sort(strs);
    print(output);
    return 0;
}

char **sort(char **strs) {
    int i=0;
    int j=0;
    int length = my_arraylen(strs);
    char *temp;

    for(i; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (my_strcmp(strs[j], strs[j+1]) == 1){
                temp = strs[j];
                strs[j] = strs[j+1];
                strs[j+1] = temp;
            }
        }
    }

    return strs;
}


void print(char **array) {
    for (int i=0; array[i]; i++) {
        printf("%s\n", array[i]);
    }
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

int my_arraylen(char **array) {
    int length =0;

    while(array[length] != NULL) {
        length++;
    }

    return length;
}