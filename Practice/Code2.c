#include<stdio.h>
int main(){

int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b && a >c){
    printf("A is Big");
}
else if(b>a && b>c){
    printf("B is Big");
}
else if (c>a && c>b){
     printf("C is Big");
}
}
