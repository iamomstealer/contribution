#include <stdio.h>
int main() {
    int array[100], num, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
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
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
