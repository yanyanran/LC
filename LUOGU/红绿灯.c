#include<stdio.h>
int main()
{
    int n,a[100001],m,r[100001],g[100001],t=0,tmp=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&r[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&g[i]);//读入数据 

    tmp=m;//代入到达第一个路口所需时间 
    for(int i=1;i<=n;i++)
    {
        t+=tmp;
        int temp=r[i]+g[i];//红绿灯时间之和
        tmp=t%temp;
        if(g[i]<tmp)
            t+=(temp-tmp);//算法核心 
        tmp=a[i];
        printf("%d\n",t);//输出数据 
    }
    return 0;
} 