#include <unistd.h>
#include <stdio.h>

void func_to_array(char **strs, void (*fun)(char*));
void my_putstr(char *str);

/*int main() {
    char *strs[] = {"Google", "Google", "IntelliJ", "CLion", "Desktop", "KaliLinux", NULL};
    func_to_array(strs, my_putstr);
    return 0;
}*/

void func_to_array(char **strs, void (*fun)(char*)) {
    for (int i = 0; strs[i] != NULL; i++) {
        fun(strs[i]);
    }
}

void my_putstr(char *str) {
    printf("%s\n", str);
}