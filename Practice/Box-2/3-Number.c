#include<stdio.h>
     main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<b && a< c)
    {
        printf("A is Small");
    }
    else if(b<a && b<c)
    {
        printf("B is Small");
    }
    else if(c<a && c<b)
    {
        printf("C is Small");
    }

}
