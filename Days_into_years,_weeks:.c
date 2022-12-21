#include<stdio.h>
int main()
{
    int days,y,w;
    scanf("%d",&days);
    y=days/360;
    w=(days-(y*365))/7;
    printf("%d
%d",y,w);
}