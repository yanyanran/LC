#include<stdio.h>
int is(int x)  //判断是否是质数，是质数返回1 
{  
	int i;
    if(x==2) return 1;
	if(x<2||x%2==0) return 0;
	for(i=3;i*i<=x;i++)
    {
		if(x%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=4;i<=n;i+=2)
    {
		for(j=2;j<i;j++)
        {
			if(is(j)&&is(i-j)) //返回值都不为0
            {
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}
