#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=200;i>0;i-=5){
        count++;
    }
    printf("Remains : %d \n",count);
}
