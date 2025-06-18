
// প্রশ্ন:

// একটি C প্রোগ্রাম লিখুন যা ব্যবহারকারীর কাছ থেকে কার্পেটের সংখ্যা (n) 
// এবং প্রতিটি কার্পেটের জন্য প্রয়োজনীয় চকলেটের সংখ্যা ইনপুট নেবে।
//  প্রোগ্রামটি সর্বনিম্ন কতটি চকলেট প্রয়োজন তা নির্ণয় করবে, যাতে প্রতিটি
//   কার্পেটের জন্য পর্যাপ্ত চকলেট থাকে এবং প্রতিটি কার্পেট পার হওয়ার পর
//    চকলেটের সংখ্যা একটি কমে যায়। প্রোগ্রামটি সফলভাবে সব কার্পেট পার 
//    হওয়ার জন্য প্রয়োজনীয় চকলেটের সংখ্যা প্রিন্ট করবে।

#include <stdio.h>

int main() {
    int n;
    printf("Enter  number of Carpet : ");
    scanf("%d",&n);

  int carpet[100];
  for(int i=0;i<n;i++){
    printf("Enter %d number carpet values :",carpet[i]);
    scanf("%d",&carpet[i]);
  }

  int chocolate =0;
  while(1){
    int current = chocolate;
    int success = 1;
    for(int i = 0;i<n;i++){
        if(current < carpet[i]){
            success =0;
            break;
        }else{
            current -=1;
        }
    }
    if(success){
        printf("You need %d chocolate for Success .\n",chocolate);
        break;
    }
    chocolate++;
  }

    return 0;
}