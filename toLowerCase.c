#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* toLowerCase(const char* str) {
    int length = strlen(str);
    char* lowercased = (char*)malloc((length + 1) * sizeof(char));
    for (int i = 0; i < length; i++) {
        lowercased[i] = tolower(str[i]);
    }
    lowercased[length] = '\0';

    return lowercased;
}

int main() {
    const char* str = "Hello, World!";

    char* result = toLowerCase(str);

    printf("String: %s\n", str);
    printf("Lowercased string: %s\n", result);

    free(result);

    return 0;
}
