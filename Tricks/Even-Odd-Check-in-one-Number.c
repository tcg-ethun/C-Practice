#include <stdio.h>

int main() {
    int num, digit;
    int isAllEven = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        digit = temp % 10;

        if (digit % 2 != 0) {
            isAllEven = 0;
            break;
        }

        temp /= 10;
    }

    if (isAllEven) {
        printf("All Even Digits\n");
    } else {
        printf("Contains Odd Digit\n");
    }

    return 0;
}
