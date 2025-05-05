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
