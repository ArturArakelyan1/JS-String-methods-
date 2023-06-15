#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* slice(const char* str, int start, int end) {
    int length = end - start;
    char* result = (char*)malloc((length + 1) * sizeof(char));
    strncpy(result, str + start, length);
    result[length] = '\0';

    return result;
}

int main() {
    const char* original = "Hello, world!";
    char* sliced = slice(original, 7, 12);

    if (sliced != NULL) {
        printf("Original: %s\n", original);
        printf("Sliced: %s\n", sliced);
        free(sliced);
    }

    return 0;
}
