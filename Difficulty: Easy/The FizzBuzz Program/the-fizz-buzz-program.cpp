// User function Template for C++

#include <stdio.h>

void fizzBuzz(int number) {
    if (number % 3 == 0)
        printf("Fizz");
    
    if (number % 5 == 0)
        printf("Buzz");
    
    if (number % 3 != 0 && number % 5 != 0)
        printf("%d", number);
    
    printf("\n"); // to move to a new line after output
}
