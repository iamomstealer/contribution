#include <stdio.h>

int main() {
    int array[100], num, temp;
    
    // Take input for number of elements
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &num);
    
    // Validate input range
    if (num <= 0 || num > 100) {
        printf("Invalid input! Please enter a number between 1 and 100.\n");
        return 1;
    }
    
    // Take array elements as input
    printf("Enter the elements: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }
    
    // Sort the array using Bubble Sort
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) {
        printf("%d", array[i]);
        if (i != num - 1) printf(" "); // Avoid trailing space
    }
    printf("\n");
    
    return 0;
}
