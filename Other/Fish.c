

// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা একটি পুকুরে মাছের সংখ্যা গণনা করবে। 
// প্রোগ্রামটি ধরে নেবে যে প্রাথমিকভাবে পুকুরে 1000টি মাছ আছে এবং প্রতি মাসে 
// 50টি নতুন মাছের জন্ম হয়। 5 বছর (প্রতি বছর 12 মাস) পরে মোট
//  মাছের সংখ্যা গণনা করবে এবং ফলাফল প্রিন্ট করবে।


#include <stdio.h>

int main() {
    int initial_fish = 1000;
    int new_babies_per_month = 50;
    int months_in_a_year = 12;
    int years = 5;

    // Total months in 5 years
    int total_months = years * months_in_a_year;

    // Total number of fish after 5 years
    int total_fish = initial_fish + (new_babies_per_month * total_months);

    // Output the total number of fish
    printf("Total number of fish after 5 years: %d\n", total_fish);

    return 0;
}
