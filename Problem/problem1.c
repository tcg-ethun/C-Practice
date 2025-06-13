#include <stdio.h>

  void proBlem();

int main() {
      proBlem();
    return 0;
}

  void proBlem(){
    int i  ,s =0 ,count = 0;
    float result ;
   for(i=1;i<=50;i++){
           if(i%2!=0){
              s+=i;
              count ++;
           }
   }
    result =   s/count;
      printf("%.2f \n",result);
  }
