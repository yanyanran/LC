//质数：不能被除1和自身以外的数整除的数
#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d",n/i);
            return 0;
        }
    }
}