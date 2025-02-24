#include <stdio.h>


int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = factorial(number);
    printf("The factorial of %d is %d\n", number, result);
    return 0;
}
