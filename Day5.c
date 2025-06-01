//Sum of array numbers

#include <stdio.h>

int main() {
  int arr[]={10,20,40,23};
  int digit = sizeof(arr)/sizeof(arr[0]);
  int sum=0;
 for(int i=0;i<digit;i++){
  sum+=arr[i];
 }
 printf("The sum of array is : %d",sum);
    return 0;
}