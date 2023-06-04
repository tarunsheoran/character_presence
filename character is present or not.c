#include <stdio.h>

int isCharacterPresent(const char* str, char target) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            return 1; // Character is present
        }
    }
    
    return 0; // Character is not present
}

int main() {
    const char* str = "Hello, World!";
    char target = 'o';
    
    int isPresent = isCharacterPresent(str, target);
    
    if (isPresent) {
        printf("Character '%c' is present in the string.\n", target);
    } else {
        printf("Character '%c' is not present in the string.\n", target);
    }
    
    return 0;
}
