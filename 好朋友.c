#include <stdio.h>
int main()
{
	int i,n,suma=0,sumb=0;
	scanf("%d",&n);
	while(n)
	{
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			{
				suma+=i;
			}
		}
		for(i=1;i<=suma/2;i++)  //直接在suma里找！
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
