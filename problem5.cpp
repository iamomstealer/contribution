#include <stdio.h>

int main() {
    // Declare an integer variable to store the factorial
    int factorial = 1;
    int number = 5;
    // Calculate the factorial of 5
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is %d\n", number, factorial);
    return 0;
}
