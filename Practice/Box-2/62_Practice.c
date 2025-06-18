#include <stdio.h>

int main() {
   int a , i=0;
   printf("Enter Count Number : ");
   scanf("%d",&a);
   do{
    printf("%d \n", i);
    i++;
   } while(i<=a);
    return 0;
}