
//Count the Number of Digits//

#include<stdio.h>
int main()
{
   int  num , count = 0;
    printf("Please Enter The Number : ");
   scanf("%d",&num);
  if(num == 0){
      count = 1;
  }
  while(num != 0){
      num = (num /10);
      count ++;
    }
  printf("The digits of number is : %d",count);
}

