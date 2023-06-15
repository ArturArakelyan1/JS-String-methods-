#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** split(const char* str, const char* pattern, int* numElements) {
    int maxNumElements = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == pattern[0]) {
            maxNumElements++;
        }
    }

    char** result = (char**)malloc(maxNumElements * sizeof(char*));

    int patternLen = strlen(pattern);
    char* strCopy = strdup(str);
    char* token = strtok(strCopy, pattern);
    int i = 0;

    while (token != NULL) {
        result[i] = strdup(token);
        token = strtok(NULL, pattern);
        i++;
    }

    *numElements = i;

    free(strCopy);

    return result;
}

// void freeSplitResult(char** result, int numElements) {
//     for (int i = 0; i < numElements; i++) {
//         free(result[i]);
//     }
//     free(result);
// }

int main() {
    const char* original = "Hello,world!This,is,a,test";
    const char* pattern = ",";
    int numElements;
    char** substrings = split(original, pattern, &numElements);

    if (substrings != NULL) {
        printf("Original: %s\n", original);
        printf("Pattern: %s\n", pattern);
        printf("Number of substrings: %d\n", numElements);
        printf("Substrings:\n");
        for (int i = 0; i < numElements; i++) {
            printf("%s\n", substrings[i]);
        }

        freeSplitResult(substrings, numElements);
    }

    return 0;
}
