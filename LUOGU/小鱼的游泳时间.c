#include <stdio.h>
int main()
{
    int a,b,c,d;
    int e,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<=c)
    {
        e=c-a;
    }
    if(d-b<0)
    {
        f=60-b+d;
        e--;
    }else{
        f=d-b;
    }
    printf("%d %d",e,f);
    return 0;
}