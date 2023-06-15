#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* trimStart(const char* str) {
    int length = strlen(str);

    int startIndex = 0;
    while (startIndex < length && isspace(str[startIndex])) {
        startIndex++;
    }

    int trimmedLength = length - startIndex;

    char* trimmed = (char*)malloc((trimmedLength + 1) * sizeof(char));
    strncpy(trimmed, str + startIndex, trimmedLength);
    trimmed[trimmedLength] = '\0';

    return trimmed;
}


