
// The AP (Arithmetic Progression )Term Problem
#include <stdio.h>

int main() {
 int a,n,d,nth;
      printf("Enter the first value of series : ");
      scanf("%d",&a);
      printf("Which term you want  : ");
      scanf("%d",&n);
      printf("Common difference : ");
      scanf("%d",&d);
      nth = a+(n-1)*d;
       printf("The ans is : %d",nth);
    return 0;
}