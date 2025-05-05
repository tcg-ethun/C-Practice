#include<stdio.h>
#define start main
#define begin {
#define end }
#define PRINT printf

int start() begin
    PRINT("I rewrote main function!\n");
end
