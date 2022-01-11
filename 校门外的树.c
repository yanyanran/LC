/*错误示范:用两个数组统计每组的头和尾巴
#include <stdio.h>
int main()
{
    int x[100],y[100];
    int l,m;                   //l长度，m区域数
    int i,str,sum=0;                 //str计数
    int realtree;
    scanf("%d %d",&l,&m); 
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<m;i++)
    {
        if(x[i+1]<y[i])         //情况1
        {
            str=y[i+1]-x[i];
        }else if(y[i+1]<x[i])   //情况2
        {
            str=x[i+1]-y[i];
        }else                   //正常情况
            str=y[i]-x[i];
            sum+=str;
    }
    realtree=l-sum;
    printf("%d",realtree);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int l,j,m,a[10005],c=0,i,x,y;
    for(i=0;i<=10000;i++)
    {
        a[i]=1;   //数组全部初始化为1
    }
    scanf("%d %d",&l,&m);  //l总长度，m区域数
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        for(j=x;j<=y;j++)
        {
            a[j]=0; //如果头小于尾，符合条件代表需要砍掉的树，将其对应树组转为0
        }
    }
    for(i=0;i<=l;i++)
    {
        if(a[i]==1)  //统计依旧为1的树组（剩下的树）
        {
           c++;
        }
    }
    printf("%d\n",c);
}