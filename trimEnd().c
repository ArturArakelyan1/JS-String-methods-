#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* trimEnd(const char* str) {
    int length = strlen(str);

    int endIndex = length - 1;
    while (endIndex >= 0 && isspace(str[endIndex])) {
        endIndex--;
    }

    int trimmedLength = endIndex + 1;

    char* trimmed = (char*)malloc((trimmedLength + 1) * sizeof(char));


    strncpy(trimmed, str, trimmedLength);
    trimmed[trimmedLength] = '\0';

    return trimmed;
}
