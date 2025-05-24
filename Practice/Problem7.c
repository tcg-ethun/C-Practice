#include <stdio.h>
 
 void printNum(int n);
int main() {
    int result ;
     printNum(14);
    return 0;
}
 void printNum(int n){
    if(n==0)
    {
        return;
    }
    printNum(n-1);
    printf("%d \n",n);
 }