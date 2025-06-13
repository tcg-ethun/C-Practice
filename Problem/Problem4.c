#include <stdio.h>

 float calculate_Discount(float value);
int main() {
    float value  , result ;
printf("Enter Tk : ");
scanf("%f",&value);
   if(value>1000){
 result = calculate_Discount(value);
 printf("The value after adding Discount :  %.2f TK",result);
    }
    else{
        printf("You are not applicable for Discount & Your value is  :  %f",value);
    }
    return 0;
}

 float calculate_Discount(float value){
    value = value - (value*0.10);
    return value;
 }