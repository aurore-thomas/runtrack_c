#include <unistd.h>
#include <stdio.h>

int char_is_digit(char c) {
    if( c >= '0' && c <= '9' ){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char test1 = '1';
    char test2 = 'T';
    printf("%d", char_is_digit(test1));
    printf("%d", char_is_digit(test2));
    return 0;
}