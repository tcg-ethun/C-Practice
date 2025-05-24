#include <stdio.h>

int table(int n);

int main() {
       int n ,result ;
       printf("Enter Number : ");
       scanf("%d",&n);
       result = table(n);
       printf("%d \n ",result);
    return result;
}

int table(int n){
    for(int i = 1; i<=10;i++){
        printf("%d \n",i*n);
    }
}
