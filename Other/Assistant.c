
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা একটি ভার্চুয়াল অ্যাসিস্ট্যান্ট হিসেবে কাজ করবে। প্রোগ্রামটি নিম্নলিখিত কার্যকারিতা সমর্থন করবে:  
// - প্রোগ্রাম শুরু হলে একটি স্বাগত বার্তা প্রিন্ট করবে।  
// - ব্যবহারকারীর কাছ থেকে কমান্ড ইনপুট নেবে এবং নিম্নলিখিত কমান্ডগুলো প্রক্রিয়া করবে:  
//   - `time`: বর্তমান সময় প্রিন্ট করবে।  
//   - `open <appName>`: নির্দিষ্ট অ্যাপ্লিকেশন (যেমন, `notepad` বা `calculator`) খুলবে। 
//       যদি অ্যাপ্লিকেশনটি অজানা হয়, তবে একটি ত্রুটি বার্তা প্রিন্ট করবে।  
//   - `joke`: একটি জোক প্রিন্ট করবে।  
//   - `exit`: অ্যাসিস্ট্যান্ট বন্ধ করে একটি বিদায় বার্তা প্রিন্ট করবে এবং প্রোগ্রাম থেকে প্রস্থান করবে।  
// - যদি অজানা কমান্ড দেওয়া হয়, তবে একটি ত্রুটি বার্তা প্রিন্ট করবে।  
// প্রোগ্রামটি একটি লুপের মাধ্যমে ক্রমাগত ইনপুট নেবে এবং উপযুক্ত ফাংশন কল করে কমান্ডগুলো প্রক্রিয়া করবে।


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void greet() {
    printf("Hello! I am your virtual assistant. How can I assist you today?\n");
}

void tellTime() {
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
}

void openApp(char *appName) {
    if (strcmp(appName, "notepad") == 0) {
        system("notepad");
    } else if (strcmp(appName, "calculator") == 0) {
        system("calc");
    } else {
        printf("Sorry, I don't recognize that application.\n");
    }
}

void tellJoke() {
    printf("Why don't programmers like nature? It has too many bugs.\n");
}

void exitAssistant() {
    printf("Goodbye! Have a nice day!\n");
    exit(0);
}

int main() {
    char input[100];
    char appName[50];

    greet();

    while (1) {
        printf("\nEnter a command: ");
        fgets(input, 100, stdin);

        // Remove the newline character from the input
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "time") == 0) {
            tellTime();
        } else if (strncmp(input, "open ", 5) == 0) {
            sscanf(input, "open %s", appName);
            openApp(appName);
        } else if (strcmp(input, "joke") == 0) {
            tellJoke();
        } else if (strcmp(input, "exit") == 0) {
            exitAssistant();
        } else {
            printf("Sorry, I don't understand that command.\n");
        }
    }

    return 0;
}