#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool startsWith(const char* str, const char* prefix) {
    int strLength = strlen(str);
    int prefixLength = strlen(prefix);

    if (prefixLength > strLength) {
        return false;
    }
    for (int i = 0; i < prefixLength; i++) {
        if (str[i] != prefix[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    const char* str = "Hello, world!";
    const char* prefix = "Hello";

    bool result = startsWith(str, prefix);

    printf("String: %s\n", str);
    printf("Prefix: %s\n", prefix);
    printf("Starts with prefix? %s\n", result ? "true" : "false");

    return 0;
}
