#include <stdio.h>
int main()
{
    unsigned long long now=1,x,n;
    scanf("%llu %llu",&x,&n);
    while(n--)
    {
        now+=now*x;
    }
    printf("%llu",now);
    return 0;
}