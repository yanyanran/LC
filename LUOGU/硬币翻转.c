#include<stdio.h>
int main()
{
	int n,a[10001]={0};

	scanf("%d",&n);
	printf("%d\n",n); 

	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j)
                continue;
			else
				a[j]=!a[j];  //取反
		}
		for(int i=1;i<=n;i++)
        {
			printf("%d",a[i]);
        }
		printf("\n");
	}
	return 0;
}