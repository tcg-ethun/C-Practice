#include<stdio.h>
int main()
{
    int sum=0 ,num;
    float avarage;
    for(int i=1;i<=10;i++)
    {
        printf("Enter value of number %d : ",i);
        scanf("%d",&num);
        sum += num ;
    }
      avarage = (sum/10);
    printf(" \n \n The sum is : %d \n",sum);
    printf("The Avarage is : %f \n",avarage);

    return 0;
}
