#include <stdio.h>
int main()
{
    int class,outclass,sum,i,flag=0,max=0;
    int str[6]={0};
    for(i=0;i<=6;i++)
    {
        scanf("%d %d",&class,&outclass);
        if(class<10&&class>=0&&outclass<10&&outclass>=0)
        {
            sum=class+outclass;
            if(sum>8)
            {
                flag=1;
                str[i]=class+outclass;
            }
        }
    }
    //测试无误
    for(i=6;i>=0;i--)//倒着找最先不高兴日期
    {
        if(max>str[i])
          max=max;
        else if(max<=str[i])
          max=i; 
    }
    if(flag==0)
    {
        printf("%d",flag);
    }else if(flag==1)
    {
        printf("%d",max+1);
    }
    return 0;
}