/*
题意理解错误，纯纯的傻*题述
#include <stdio.h>
int main()
{
    int n,x[10000],num[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        num[i]=x[i]-x[i]/10;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}*/


/*
最后三个测试点显示TLE，70分
#include<stdio.h>
int a(long long int x)//判断是否含有7 
{
    while(x!=0)
    {
        if(x%10==7)
            return 0;
        x/=10; 
    }
    return 1;
}
int main()
{
    long long int t,i,j;
    scanf("%lld",&t);
    long long int n[t],sum[t+1];

    for(i=0;i<t;i++)
    {
        scanf("%lld",&n[i]); 
        sum[i]=n[i];     //初始化数组
        for(j=1;j<=n[i];j++)
        {
            if(a(j)==0)
            {
                sum[i]--;  //逢7减1
            }
        }
        printf("%lld\n",sum[i]);
    }
    return 0;
}*/

//九进制思想(我不是很理解)
#include <stdio.h>
int x, w;
long long n, i,str;
int main()
{
	scanf("%d",&x);
	while(x--)
    {
		scanf("%lld",&n);
		for(i=1,str=0;n;n/=10,i*=9)
        {
			w = n%10;
			if(w>=7)
				w--;
			str+=i*w;
		}
		printf("%lld\n",str);
	}
}

