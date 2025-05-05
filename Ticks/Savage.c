#include<stdio.h>
int main()
{
    int i;
    i = 0;
    for( ; i<=16;){
        printf("%d \n",i);
        i = -~(-~(-~(-~(-~i))));
    }
}
