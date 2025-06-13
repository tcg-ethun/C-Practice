#include <stdio.h>

 void cProblem();
 
 int main() {
 cProblem();
}

 void cProblem(){
     int i  , s=0;
     i =1;
     while(i<=100)
     {
         if (i%3==0 && i%5==0){
           s+=i;
         }
            i++ ;
     }
     printf("%d \n",s );
 }