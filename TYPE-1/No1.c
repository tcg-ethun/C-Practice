#include<stdio.h>
main()
{
    int i,num,evenSum=0;
    for(i=1 ; i<=10;i++){
        printf("Enter input value %d : ",i);
        scanf("%d",&num);
        if(num%2==0){
            evenSum += num ;
        }
        else{
            printf(" \n \n %d is an Odd Number.\n \n",num);
        }
    }
        printf("The sum of Even Numbers is : %d ",evenSum);
}
