#include <stdio.h>

int main() {
    int size, i, previousValue, currentValue;
    int veryAscendingFlag = 1;

    printf("Enter the size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Enter a positive size.");
    } else {
        printf("Enter a value: ");
        scanf("%d", &previousValue); // Take the first value outside the loop
        size--; // Already read one number

        while (size > 0) {
            printf("Enter a value: ");
            scanf("%d", &currentValue);

            if (currentValue <= previousValue) {
                veryAscendingFlag = 0;
            }

            previousValue = currentValue;
            size--;
        }
    }

    if (veryAscendingFlag == 1) {
        printf("Sequence is Very Ascending.\n");
    } else {
        printf("Sequence is not Very Ascending.\n");
    }

    return 0;
}

