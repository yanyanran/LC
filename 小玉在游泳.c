#include <stdio.h>
int main()
{
    float m,x=2,sum=2;
    int step=1;
    scanf("%f",&m);
    for(sum=0;sum<m;step++)
    {
        x*=0.98;
        sum+=x;
    }
    printf("%d",step);
    return 0;
}