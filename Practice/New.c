 #include<stdio.h>
   int main(){
        int i,n ,s=0;
        scanf("%d",&n);
         for(i = 3 ; i<=n ; i+=4){
           s += i;
    }
    printf("The sum is : %d",s);
}


