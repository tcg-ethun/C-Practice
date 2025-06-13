//Find Last Digit of a number 

#include <stdio.h>

int main() {
    int num,reversed=0,digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0){
    digit = num%10;
        printf("%d",digit);
    }
    else{
        printf("");
    }
     
return 0;
}