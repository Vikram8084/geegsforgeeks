// User function Template for C

#include <stdio.h>

void reverseString(char str[]) {
    int len = 0;
    
    // Find length of the string
    while (str[len] != '\0') {
        len++;
    }

    // Print characters in reverse order
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
