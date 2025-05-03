#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
    float X , Y , N , P  , M ;
    scanf("%f %f %f %f", &X,&Y,&N,&P);
    M = (pow(X,10)+pow(Y,6)+pow(pi,30)+N*P+pow(X*P,10))/(pi*P*N - pow(3,P)+pow(N,2)*pi);
    printf("%f",M);
}
