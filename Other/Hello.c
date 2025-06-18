#include <stdio.h>

int main() {
 int a,b,c;
 printf("Enter a: ");
 scanf("%d",&a);
 printf("Enter b: ");
 scanf("%d",&b);
 printf("Enter c: ");
 scanf("%d",&c);
 if(a==b && b==c){
    printf("All are tie here ! \n");
 }
  else if(a>=b && a>=c){
    if((a==b)||(a==c)){
        printf("%d is tie here",a);
    }
    else{
        printf("%d is Bigger !",a);
    }
  }
  else if(b>=a && b>=c){
    if((b==a)||(b==c)){
        printf("%d is tie here",b);
    }
    else{
        printf("%d is Bigger !",b);
    }
  }
   else if(c>=a && c>=b){
    if((c==a)||(c==b)){
        printf("%d is tie here",c);
    }
    else{
        printf("%d is Bigger !",c);
    }
  }
    return 0;
}