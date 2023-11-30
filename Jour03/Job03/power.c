#include <unistd.h>
#include <stdio.h>

int power(int n, int power);

/* int main() {
    int test = 7;
    int result = power(test, 2);
    printf("%d", result);
    return 0;
} */

int power(int n, int power) {
    int result = 1;

    while (power != 0) {
        result *= n;
        power--;
    }
    return result;
}