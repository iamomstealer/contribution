#include <stdio.h>

int main() {
    // Declare an integer variable to store the number
    int number;
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
    return 0;
}
