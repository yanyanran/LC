/*RE
#include<stdio.h>
int main()
{
    int n,num;
    int str[10001];
    int flag=0;     //标记是不是第一个，是1，不是0
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",str[i]);
    }
    for(int i=n;i>0;i--)
    {
        if(str[i]>str[i-1]) continue;
        else {
            flag=1;
            num=str[i];
            str[i]=str[i-1];
            str[i-1]=num;
            break;
        }
    }
    if(flag==0)
    {
        printf("ERROR");
        return 0;
    }else
    {
        for(int i=0;i<n;i++)
        {
            printf("%d",str[i]);
        }
        return 0;
    }
}*/

#include<stdio.h>
int a[11],b[11],c[11],n;
void print()//输出答案
{
	int flag=0;
	for(int i=1;i<=n;i++)
	{
        if(a[i]!=0) flag=1;
    }
	if(flag==0) printf("ERROR");//特判是不是第一个排列
	else
	{	
		for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
	}
};
int check1(int dep,int x)//判断同一个排列中是否出现了同一个数字
{
	for(int i=1;i<dep;i++)
	if(b[i]==x)return 0;
	return 1;
};
int check2()//判断是否查找到了目标排列
{
	for(int i=1;i<=n;i++)
	if(b[i]!=c[i])return 0;
	return 1;
};
void dfs(int dep)//深度优先搜索
{
	if(dep>n)
	{
		if(check2())
		{
			print();
			exit(0);
		}
		for(int i=1;i<=n;i++)
        {
            a[i]=b[i];//滚动数组
        }
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(check1(dep,i))
		{
			b[dep]=i;
			dfs(dep+1);
		}
	}
};
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
    {
        scanf("%d",&c[i]);//输入目标序列
    }
	dfs(0);
	return 0;
}