#include <stdio.h>

int sum(int a , int b );

int main() {
     
     int a , b ,result ;
     printf("Enter 1st Number : ");
     scanf("%d",&a);
      printf("Enter 2nd Number : ");
     scanf("%d",&b);
    result = sum(a,b);
    printf("The sum is : %d \n",result);
}

int sum(int a , int b ){
     return a + b;
}
