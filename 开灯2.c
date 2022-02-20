/*
20分
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        a[i]=0; //全部初始化为0表示关的状态
    }
    for(int i=1;i<=n;i++)
    {
        if(i%n==0)
        {
           // a[i]^=a[i]; //用异或
           if(a[i]==0) a[i]=1;
           else if(a[i]==1) a[i]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            printf("%d",i);
        }
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    for(int i=1;i*i<=n;i++)
        printf("%d ",i*i);
    return 0;
}