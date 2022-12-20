#include<stdio.h>
int main()
{
    int n,sum=0,p=1;
    scanf("%d",&n);
    while(n)
    {
        sum+=n%10;
        p*=n%10;
        n/=10;
    }
    if(sum==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}