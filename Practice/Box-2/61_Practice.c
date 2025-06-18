#include <stdio.h>

int main() {

    int myNumbers[4] = {25, 50, 75, 100};
int* ptr = (myNumbers +2);
printf("%d",*ptr);

    return 0;
}