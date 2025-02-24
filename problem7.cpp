#include <stdio.h>
#include <math.h>

int main() {
    int number, isPrime = 1;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // Check if the number is less than or equal to 1
    if (number <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
