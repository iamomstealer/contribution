#include <stdio.h>

int main() {
    int number, remainder, result = 0, temp;
    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Assign the number to temp
    temp = number;

    // Check if the number is an Armstrong number
    while (temp != 0) {
        remainder = temp % 10;
        result += remainder * remainder * remainder;
        temp /= 10;
    }

    // Print the result
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
