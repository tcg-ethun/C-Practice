
// প্রশ্ন :
// একটি পূর্ণসংখ্যার অ্যারে ফাংশনের মাধ্যমে পাঠানো হয়েছে
//  এবং ফাংশনটি সেই অ্যারেটির সব উপাদান লুপ ব্যবহার করে প্রিন্ট করে। 

#include<stdio.h>

void printfNum(int* arr,int n);
int main()  {

    int arr[]={20,39,29};
 printfNum(arr,3);
 return 0;
}

void printfNum(int* arr,int n){
 for(int i=0;i<n;i++){
    printf("%d \t",arr[i]);
 }
}