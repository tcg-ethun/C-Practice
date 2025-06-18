#include <stdio.h>

int main() {
 int a , i ;
 scanf("%d" , &i);
 for(a = 1 ; a<=i ; a++){
  if(a%3==0 && a%5==0){
    printf("FizzBuzz \n");
  }
  else if(a%5==0){
       printf("Buzz \n");
  }
  else if(a%3==0){
    printf("Fizz \n");
  }
  else{
    printf("%d \n",a);
  }

 }
    return 0;
}