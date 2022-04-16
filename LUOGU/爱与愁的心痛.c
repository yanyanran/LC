#include<stdio.h>
int main()
{
    int n,m,str[10000],i,min=100000,num=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=1;i<=n-m+1;i++)
    {
            for(int j=1;j<=m;j++)
            {
                num+=str[i+j-1];
            }
            if(num<min)
            {
                min=num;
            }
            num=0;
    }
    printf("%d",min);
    return 0;
}