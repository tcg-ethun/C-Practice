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
