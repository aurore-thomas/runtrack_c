#include <unistd.h>
#include <stdio.h>

void swap(int *a, int *b);

/* int main() {
    int a = 2;
    int b = 7;
    swap(&a, &b);
    printf("%d", a);
    printf("%d", b);
    return 0;
} */

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}