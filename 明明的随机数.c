/*错误示范
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
}*/
#include <stdio.h>
int main ()
{
    int num[105]={0};
    int N,i,j,t,c;
    scanf("%d",&N);    //N个随机数
    if(N<=100&&N>0)
    {
        for(i=0;i<N;i++)          //安排随机数
        {
            scanf("%d",&t);  
            for(j=0;j<i;j++)
            {
                if(t==num[j])  //相同跳出
                {
                    i--;
                    N--;
                    break;
                }
            }
                if(j==i)        //否则存入数组
                {
                    num[i]=t;
                }
            //完成去重
        }
    
    for(i=0;i<N;i++)          //排序
        for(j=i+1;j<N;j++)
            if(num[i]>num[j])
            {
                c=num[i];
                num[i]=num[j];
                num[j]=c;
            }

    if(num[N-1]<=1000) //对排序后的最大数进行判断是否超出范围
    {
        printf("%d\n",N);
        for(i=0;i<N;i++)
        {
            printf("%d ",num[i]);
        }
    }else;
    }
    return 0;
}
