
//input 3 digits number and get the value of 2nd digits !
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number  : ");
    scanf("%d",&num);
    int temp;
    temp = (num/10)%10;
    printf("Your  Number : %d",temp);
}
