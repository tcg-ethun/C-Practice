
// প্রশ্ন:  
// একটি C প্রোগ্রাম লিখুন যা ব্যবহারকারীর কাছ থেকে একটি পূর্ণসংখ্যা ইনপুট নেবে 
// এবং সংখ্যাটির প্রতিটি অঙ্কের যোগফল এবং গুণফল বের করবে। প্রোগ্রামটি পরীক্ষা 
// করবে যে অঙ্কগুলোর যোগফল এবং গুণফল সমান কিনা। যদি সমান হয়, তবে
//  "Equal" প্রিন্ট করবে, অন্যথায় "Not Equal" প্রিন্ট করবে।

#include<stdio.h>
int main()
{
    int num , digit , sum = 0 , product = 1;
    scanf("%d",&num);
    int temp = num;
    while(temp > 0)
    {
        digit = temp%10;
        sum += digit;
        product *= digit;
        temp /=10;
    }
  if(sum == product){
    printf("Equal");
  }
  else{
    printf("Not Equal");
  }
}
