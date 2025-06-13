#include<stdio.h>
#include<math.h>
 main(){

int i, a,sum=0;
scanf("%d",&a);
for(i=20;i<=a;i+=40){
    sum+=pow(i,5);
}
printf("The sum is : %d",sum);
}


