#include <unistd.h>
#include <stdio.h>

int my_sqrt(int n);

int main() {
    int test = 81;
    int result = my_sqrt(test);
    printf("%d", result);
    return 0;
}

int my_sqrt(int n) {
    float sqrt = (float)n / 2;
    float temp = 0;

    while (sqrt != temp) {
        temp = sqrt;
        sqrt = ((float)n/temp + temp) / 2;
    }
    int convert = (int) sqrt;
    float convert_comparison = (float) convert;

    if (sqrt != convert_comparison) {
        return  0;
    }
    return (int)sqrt;
}