#include<stdio.h>
int main()
{
    int sum(int);
    int s,n=5;
    s=sum(n);
    printf("sum=%d",s);
    return 0;
}
int sum(int n)
{
if(n==0)
    return 1;
else
    return (n*(n+1)*(2*n+1)/6);
}
