#include <stdio.h>

int year(int n);
int main() {
    int n;
    printf("Enter Year : ");
    scanf("%d",&n);
  int result = year(n);
    return 0;
}

int year(int n){
      if(n%400==0 || n%4==0 && n%100!=0)
      {
        printf("%d This  is Leap Year",n);
      }
      else{
        printf("%d This is Not leap Year ",n);
      }
      return 0;
}