#include<stdio.h>
int main()
{
    int p[100010];//每个农夫愿意付的钱
    int n,m;
    int sum[100010];//总钱数
    int max=0; 
    int q=0;

    scanf("%d %d",&n,&m);

    for(int i=1;i<=m;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(p[j]>=p[i])		//当第p[i]个农夫出价时，
                sum[i]+=p[i];	//若第j个农夫出价比他大则计入总数
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(max<=sum[i])
        {
            max=sum[i];		//选择最大的一组解
            q=i;
        }
    }

    printf("%d ",p[q]);
    printf("%d",max);
    return 0;
}