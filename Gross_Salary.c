#include<stdio.h>
int main()
{
    int bs;
    float da,hra,ts;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        da=0.8*bs;
        hra=0.2*bs;
        ts=bs+da+hra;
        printf("%.2f",ts);
    }
    else if(bs<=20000)
    {
        da=0.9*bs;
        hra=0.25*bs;
        ts=bs+da+hra;
        printf("%.2f",ts);
    }
    else if(bs>20000)
    {
        da=0.95*bs;
        hra=0.3*bs;
        ts=bs+da+hra;
        printf("%.2f",ts);
    }
}