#include<stdio.h>

    int arrAy(int arr[],int n);

int main()  {
    int arr[]={3,7,1,2,1,5};
    printf("%d \n",arrAy(arr,6));
 return 0;
}
    int arrAy(int arr[],int n){
         int count = 0;
         for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                count++;
            }
         }
         return count;
    }
