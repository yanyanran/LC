/*
#include <stdio.h>
int main()
{
    int n,i,num[1000];
    int str=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)  //打印1
        {
            for(int j=1;j<=num[i];j++)
            {
                printf("1");
                str++;
            }
            if(str==n)
            {
                printf("\n");
                str=0;
            }
        }else if(i%2!=0)  //打印0
        {
            for(int j=1;j<=num[i];j++)
            {
                printf("0");
                str++;
            }
        }
        if(str==n)
        {
            printf("\n");
            str=0;
        }
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,a,str;
	int tot=0;
	scanf("%d",&n);
	while(scanf("%d",&a)!=EOF)
	{
		if(tot%2==0)  //输出0 
		{
			for(int i=1;i<=a;i++)
			{
				printf("0"); 
				str++;
				if(str==n)
				{
					printf("\n");
					str=0;
				}
			}
			tot++;//下一个操作 
		}
		else  //输出1
		{   
		    for(int i=1;i<=a;i++)
			{
				printf("1");
				str++;
				if(str==n)
				{
					printf("\n");
					str=0;
				}
			}
			tot++;
		}
	}
	return 0;
}