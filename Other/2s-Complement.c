
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা ব্যবহারকারীর কাছ থেকে দুটি 8-বিট সংখ্যা 
// (unsigned char, 0 থেকে 255) ইনপুট নেবে এবং টু'স কমপ্লিমেন্ট পদ্ধতি
//  ব্যবহার করে সংখ্যা দুটির বিয়োগফল (a - b) নির্ণয় করবে। প্রোগ্রামটি নিম্নলিখিত তথ্যগুলো প্রিন্ট করবে:  
// - প্রথম সংখ্যা (A) এবং এর বাইনারি রূপ।  
// - দ্বিতীয় সংখ্যা (B) এবং এর বাইনারি রূপ।  
// - দ্বিতীয় সংখ্যার টু'স কমপ্লিমেন্ট (~B + 1) এবং এর বাইনারি রূপ।  
// - বিয়োগফল (Result) এবং এর বাইনারি রূপ।  
// প্রতিটি বাইনারি সংখ্যা 8-বিট আকারে প্রিন্ট করতে হবে।



#include <stdio.h>

unsigned char twosComplement(unsigned char b) {
    return (~b) + 1;
}

void subtractUsingTwosComplement(unsigned char a, unsigned char b) {
    unsigned char b_comp = twosComplement(b);
    unsigned char result = a + b_comp;

    printf("A       : %u (Binary: ", a);
    for (int i = 7; i >= 0; i--) printf("%d", (a >> i) & 1);

    printf(")\nB       : %u (Binary: ", b);
    for (int i = 7; i >= 0; i--) printf("%d", (b >> i) & 1);

    printf(")\n~B + 1  : %u (Binary: ", b_comp);
    for (int i = 7; i >= 0; i--) printf("%d", (b_comp >> i) & 1);

    printf(")\nResult  : %u (Binary: ", result);
    for (int i = 7; i >= 0; i--) printf("%d", (result >> i) & 1);
    printf(")\n");
}

int main() {
    unsigned char a, b;
    printf("Enter A (0-255): ");
    scanf("%hhu", &a);
    printf("Enter B (0-255): ");
    scanf("%hhu", &b);

    subtractUsingTwosComplement(a, b);

    return 0;
}

