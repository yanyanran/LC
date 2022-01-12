#include <stdio.h>
int main ()
{
    int num[105]={0};
    int N,i,j;
    scanf("%d",&N); //N个随机数
    if(N<=100&&N>0)
    for(i=0;i<N;i++)          //安排随机数
    {
        scanf("%d",&num[i]);  
        if(i==0)              //排重
        {
            break;
        }else for(j=i-1;j>0;j--)
        {
            if(num[i]==num[j])
            {
                num[i]=0;
                i--;
                N--;
                break;
            }
        }
    }
    		for(i=0;i<N;i++)
            {
			for(j=i+1;j<N;j++)
            {
				if(num[i]>num[j])
				{
					int c=num[i];
					num[i]=num[j];
					num[j]=c;
				}
            }
            }
   	return 0;

}