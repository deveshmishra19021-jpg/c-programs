#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
       int g=n%10;
        if(g%2==0)
        sum =sum+g;
        n=n/10;}
        printf("the sum %d",sum);
        
    
return 0;}