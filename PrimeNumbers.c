#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2 || n==3 || n==5 || n==7)
    {
        printf("Yes entered number is a Prime number");
    }
    else if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
    {
        printf("No the number entered is not a Prime Number");
    }
    else
    printf("Yes the number entered is a Prime Number");
    return 0;
}
