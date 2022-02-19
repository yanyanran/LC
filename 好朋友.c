#include <stdio.h>
int main()
{
	int i,n,suma,sumb;
	scanf("%d",&n);
	while(n)
	{
		for(i=1,suma=0;i<=n/2;i++)
		{
			if(n%i==0)
			{
				suma+=i;
			}
		}
		for(i=1,sumb=0;i<=suma/2;i++)
		{
			if(suma%i==0)
			{
				sumb+=i;
			}
		}
		if(sumb==n&&suma!=n)
		{
			printf("%d %d\n",n,suma);
			break;
		}
		n++;
	}
	return 0;
} 