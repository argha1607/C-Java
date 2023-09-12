#include <stdio.h>

int main() {
    int dNum, bNum = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &dNum);
int rem;
    while (dNum > 0) {
         rem = dNum % 2;
        bNum = bNum + rem * base;
        dNum = dNum/ 2;
        base = base *10;
    }

    printf("Binary representation: %d\n", bNum);

    return 0;
}
