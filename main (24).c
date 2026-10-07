#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=0;
    int lastvalue=0;
    while(n>0){
    lastvalue=n%10;
    sum=sum+lastvalue;
    n=n/10;
    
    }
    printf("the sum of number%d",sum);
    return 0;}
