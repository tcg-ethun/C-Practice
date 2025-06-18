
// প্রশ্ন :
// একটি অ্যারে ১০ জন সদস্যের নাম্বার ধারণ করে এবং 
// আরেকটি অ্যারে ৯ জন জীবিত সদস্যকে ধারণ করে। 
// প্রোগ্রামটি কোন সদস্য মারা গেছে তা খুঁজে বের করে।

#include <stdio.h>

int main() {
    int i, j;
    int members[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int members_after_death[9] = {1, 2, 3, 4, 5, 6,7, 8, 10};
    for(i = 0; i < 10; i++) {
        int found = 0;
        for(j = 0; j < 9; j++) {
            if(members[i] == members_after_death[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("Mara Jaoya Member: %d\n", members[i]);
            break;
        }
    }
    return 0;
}
