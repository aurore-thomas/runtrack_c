#include <unistd.h>
#include <stdlib.h>

void delete_str_array(char ***strs) {
    for (int i = 0; (*strs)[i]; i++) {
        free((*strs)[i]);
        (*strs)[i] = NULL;
    }
    free(*strs);
    *strs = NULL;
}
