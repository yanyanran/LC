//为使乘积最大，各个数字之差不超过1
#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b-a%b;++i) //输出b-a%b个a/b
    {
        printf("%d ",a/b);
    }
    for(;i<=b;++i)
    {
        printf("%d ",a/b+1);
    }
    return 0;
}