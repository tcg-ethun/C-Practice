
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা ম্যাক্রো (#define) ব্যবহার করে `main` 
// ফাংশনের নামকে `home`, ফাংশনের শুরুকে `{`, শেষকে `}`, এবং
//  `printf` ফাংশনকে `PRINT` হিসেবে পুনঃনামকরণ করবে। প্রোগ্রামটি "Define Tricks !" বার্তাটি প্রিন্ট করবে।

#include<stdio.h>
#define home main
#define suru {
#define ses }
#define PRINT printf

int home() suru
    PRINT("Define Tricks !\n");
ses 
