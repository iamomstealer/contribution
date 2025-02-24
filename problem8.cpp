#include <stdio.h>
int main() {
    // Declare variable for the number of rows
    int numRows = 5;
    // Print the pattern
    for (int row = 1; row <= numRows; row++) {
        for (int col = 1; col <= row; col++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}