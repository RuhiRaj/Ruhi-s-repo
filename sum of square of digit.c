#include <stdio.h>
#include <stdlib.h>

int main()
{
    int square(int);
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("sum of digit is %d",square(n));
    return 0;
}
int square(int n)
{
    if(n/10==0){
        return (n*n);
    }
    else{
        return((n%10)*(n%10)+square(n/10));
    }
}

