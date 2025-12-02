#include <stdio.h>

int main() {
    int num, leftShift, rightShift;

    printf("Enter a number: ");
    scanf("%d", &num);

    leftShift = num << 1;
    rightShift = num >> 1;

    printf("Original number: %d\n", num);
    printf("After left shift: %d\n", leftShift);
    printf("After right shift: %d\n", rightShift);

    return 0;
}

