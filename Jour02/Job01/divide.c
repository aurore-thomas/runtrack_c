#include <unistd.h>
#include <stdio.h>

void divide(int *val);

/*int main() {
    int valeur = 4;
    divide(&valeur);
    printf("%d", valeur);
    return 0;
}*/

void divide(int *val) {
    *val /= 2;
}