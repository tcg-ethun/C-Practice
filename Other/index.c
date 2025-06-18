
// SUM OF AN ARRAY


#include<stdio.h>
int main()  {

   int arr[] = { 10,20,30,29,38};
   int size = sizeof(arr) / sizeof(arr[0]);
   int i , s=0;
   for(i=0;i<size;i++){
     s+=arr[i];
   }
   printf("THe sum is : %d",s);

 return 0;
}