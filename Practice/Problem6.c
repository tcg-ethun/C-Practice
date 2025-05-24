#include <stdio.h>

void printNumber(int i);

int main() {
  printNumber(50);        
    return 0;
}

void printNumber(int i) {
    if(i < 1) return;         
    printf("%d\n", i);  
    printNumber(i - 1);         
}

