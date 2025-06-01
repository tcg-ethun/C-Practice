
//The Carpet Problem 
// Que: How many chocolate you need for success ?

#include <stdio.h>

int main() {
    int n;
    printf("Enter  number of Carpet : ");
    scanf("%d",&n);

  int carpet[100];
  for(int i=0;i<n;i++){
    printf("Enter number carpet value :");
    scanf("%d",&carpet[i]);
  }

  int chocolate =0;
  while(1){
    int current = chocolate;
    int success = 1;
    for(int i = 0;i<n;i++){
        if(current < carpet[i]){
            success =0;
            break;
        }else{
            current -=1;
        }
    }
    if(success){
        printf("You need %d chocolate for Success .\n",chocolate);
        break;
    }
    chocolate++;
  }

    return 0;
}


