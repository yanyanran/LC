/*
只AC了两个测试点，20分
#include <stdio.h>
int main()
{
    int m,n,i,str;
    int sum1=0,sum2=0;
    int v1[1000],v2[1000],t1[1000],t2[1000];

    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&v1[i],&t1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&v2[i],&t2[i]);
    }

     //初始判断比赛开始时谁领先

    int k=(m>n?n:m);
    for(i=0;i<k;t1[i]--,t2[i]--)  
    {
        //一号判断
        if(t1[i]!=0)
        {
            sum1+=v1[i];
        }else
        {
            i++;
            sum1+=v1[i];
        }
        //二号判断
        if(t2[i]!=0)
        {
            sum2+=v2[i];
        }else
        {
            i++;
            sum2+=v2[i];
        }
        if(sum1>sum2)
        {
            str++;
        }
    }
    if(v1[0]>=v2[0])
    {
       printf("%d",str-1);
    }else printf("%d",str);
    return 0;
}*/

#include<stdio.h>
int i,j;
int m,n;
int x,y;
int a[1000100],b[1000100],flag[1000100];
int k=0;
int ans=0;
int main()
{
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&x,&y);
		for(j=1;j<=y;j++)
        {
            a[k+j]=a[k+j-1]+x;
        }
		k+=y;
	}
	k=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&x,&y);
		for(j=1;j<=y;j++)
        {
            b[k+j]=b[k+j-1]+x;
        }
		k+=y;
	}
    
	for(i=1;i<=k;i++)
	{
		if(a[i]>=b[i])
		flag[i]=1;
		if(a[i]<b[i])
		flag[i]=2;
		if(flag[i-1]!=flag[i])
		ans++;
	}
	printf("%d",ans-1);
	return 0;
}