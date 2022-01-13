//方法一：查重+排序
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
                if(t==num[j])  //遍历以往数组，相同跳出
                {
                    i--;
                    N--;
                    break;
                }
            }
                if(j==i)        //i完整，说明没有相同情况，存入数组
                {
                    num[i]=t;
                }
            //完成去重
        }
    
    for(i=0;i<N;i++)          //排序（来个冒泡）
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


//方法二：桶排序对号入座(高效便捷代码少！！)
#include<stdio.h>
int main()
{
    int N,a[1001]={0},t,i;
    int count=0; 
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&t);
        if(a[t]==0)
        {
            a[t]=t;
            count++;
        }
    }
    printf("%d\n",count);
    for(i=0;i<1001;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
