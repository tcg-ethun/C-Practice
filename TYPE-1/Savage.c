#include<stdio.h>
#define start main
#define print printf
int start()
{
    int i;
    i = 0;
    for( ; i<=16;){
        print("%d \n",i);
        i = -~(-~(-~(-~(-~i))));
    }
}

