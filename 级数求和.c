/*错误示范
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	double x=1/i,sum;
	for(sum=0;sum<=(double)n;i++)
	{
		sum+=x;
	}
	printf("%d",i);
	return 0;
}*/
/*
坑在于记录1/i的数组必须足够大，可以足够容纳项数（大概有10^8之多）
然后是i的数要能够大，不能爆
*/
#include<stdio.h>
double s[10000000];  //坑1
int main ()
{ 	
    long long i,k;   //坑2
    double sum=0.0;
    scanf("%lld",&k);
    for(i=0;sum<=(double)k;i++)
    {
        s[i]=1/(double)(i+1); 
        sum+=s[i];
        
    }
    printf("%lld\n",i);
    return 0;
}