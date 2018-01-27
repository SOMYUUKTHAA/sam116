#include<stdio.h>
int concat(int,int);
void main()
{
    int N,K,c;
    printf("\nENTER TWO NUMBERS");
    scanf("\n%d\t%d",&N,&K);
    c=concat(N,K);
    printf("%d",c);
    
}
int concat(int a,int b)
{
    int p=10;
    while(b>=p)
    p*=10;
    return a*p+b;        
}
