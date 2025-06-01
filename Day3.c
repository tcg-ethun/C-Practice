
// The Best Train Route Problem

#include <stdio.h>

int main() {
   int arr1[]={2,8,5};   //This is Route 1
   int arr2[]={1,5,4};   //This is Route 2
   int result1=0, result2=0 ;
int n =sizeof(arr1)/sizeof(arr1[0]);
 for(int i=0;i<n;i++){
    if(i%2==0){
     result1 +=arr1[i];
    result2 +=arr2[i];
    }
    else{
        result1 += arr2[i];
        result2+=arr1[i];
    }
 }
 
     if(result1<result2){
        printf("Route 1 is Best cz Time is  : %d",result1);
     }
    else if(result2<result1){
        printf("Route 2 is Best cz time is : %d",result2);
     }
     else if(result1==result2){
        printf("Both are Good . The time is : %d",result1);
     }

    return 0;
}
