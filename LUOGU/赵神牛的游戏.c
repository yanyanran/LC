//k点法力值，m个技能，怪物有n个体力值
//a为消耗体力值，b为造成的伤害
#include<stdio.h>
int main()
{
	int n,m,k,a,b;
	int c=0;//判断是否能打败boss 
	scanf("%d %d %d",&k,&m,&n);
	for(int i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		if(a==0)
		{
			printf("%d ",i);
			c=1;
		}
		else if(k/a*b>=n)
		{
			printf("%d ",i);
			c=1;//能打败 
		}
	}
	if(c==0) printf("-1");//不能打败boss 
	return 0;
}