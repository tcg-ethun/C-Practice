
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা ব্যবহারকারীর কাছ থেকে একটি পূর্ণসংখ্যা 
// ইনপুট নেবে এবং পরীক্ষা করবে যে সংখ্যাটির সব অঙ্ক জোড় (even) কিনা। 
// যদি সব অঙ্ক জোড় হয়, তবে "All Even Digits" প্রিন্ট করবে। যদি অন্তত 
// একটি অঙ্ক বিজোড় (odd) হয়, তবে "Contains Odd Digit" প্রিন্ট করবে।

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
