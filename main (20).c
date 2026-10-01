#include<stdio.h>
int main()
{


    int n;
    printf("enter the number");
    scanf("%d",&n);
    int a=1;
    for (int i=2;i<=n-1;i=i+1) {
        if(n%i==0){
            printf("yes it is composite");
            a=0;
            break;}
    }
    if(a==1)printf("it is prime");
    else printf("it is composite");
       return 0; }
        
    