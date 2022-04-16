#include<stdio.h>
int main()
{
    int str[10001];
    long double a,ans=0;
    while(scanf("%llf",&a)!=EOF)
    {
        ans+=a*1000000;
    }
    printf("%.5llf",ans/1000000);
    return 0;
}