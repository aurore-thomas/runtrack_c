#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, 1);
}

/* int main() {
    char t = 't';
    my_putchar(t);
    return 0;
} */