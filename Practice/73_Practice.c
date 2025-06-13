
// Print numbers from  2D Array  
#include <stdio.h>

int main() {
 int Hex[2][3] = {{10,30,30},{20,34,23}};
 int i,j;
 for( i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d \n",Hex[i][j]);
    }
 }
    return 0;
}