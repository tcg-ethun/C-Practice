#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("A+");
    }
    else if (marks >= 70) {
        printf("A");
    }
    else if (marks >= 60) {
        printf("A-");
    }
    else if (marks >= 50) {
        printf("B");
    }
    else if (marks >= 40) {
        printf("C");
    }
    else if (marks >= 33) {
        printf("D");
    }
    else if (marks >= 0) {
        printf("F");
    }
}
