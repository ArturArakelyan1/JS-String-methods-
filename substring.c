#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* substring(const char* str, int start, int end) {
    int strLength = strlen(str);
    if (end > strLength) {
        end = strLength;
    }

    int substringLength = end - start;

    char* substring = (char*)malloc((substringLength + 1) * sizeof(char));
    if (substring == NULL) {
        fprintf(stderr, "Error: Memory allocation failed.\n");
        return NULL;
    }

    for (int i = 0; i < substringLength; i++) {
        substring[i] = str[start + i];
    }

    substring[substringLength] = '\0';

    return substring;
}

int main() {
    const char* str = "Hello, world!";
    int start = 7;
    int end = 12;

    char* result = substring(str, start, end);

    printf("String: %s\n", str);
    printf("Substring from index %d to %d: %s\n", start, end, result);

    free(result);

    return 0;
}
