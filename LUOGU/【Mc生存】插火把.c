#include<stdio.h>
int main()
{
    int a[1000][1000]; 
    int n,m,k,x,y,str=0;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=m;i++) //火把 
    {
        scanf("%d %d",&x,&y);
        x+=2;    //整体往后移2格 
        y+=2;    //y也一样 
        for(int j=x-2;j<=x+2;j++)
        {
            a[j][y]=1; //把照到的地方变为1 
        }
        for(int j=y-2;j<=y+2;j++)
        {
            a[x][j]=1;
        }
        a[x+1][y+1]=1;
        a[x-1][y-1]=1;
        a[x+1][y-1]=1;
        a[x-1][y+1]=1;
    }
    for(int i=1;i<=k;i++)  //萤石 
    {
        scanf("%d %d",&x,&y);
        x+=2;
        y+=2;
        for(int j=x-2;j<=x+2;j++)
        {
            for(int k=y-2;k<=y+2;k++)
            {
                a[j][k]=1;
            }
        }
    }

    for(int i=3;i<=n+2;i++) //因为数组后移2位，要从3开始找 
    {
        for(int j=3;j<=n+2;j++)
        {
            if(a[i][j]==0) str++;  //当为0时、计数器+1
        }
    }
    printf("%d",str);
    return 0;
}

//另外一种看不懂的枚举方法，更简单
#include <stdio.h> 
#include <stdlib.h>
int n,m,k,a,b,str;
int s[5005][5005];
int pd(int x, int y) //判断是否越界 
{ 
    if(x<1||y<1||x>n||y>n) return 0;
    else return 1;
};
int main()
{
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=m+k;i++)
    {
        scanf("%d %d",&a,&b);

        for(int x=-2;x<=2;x++)
            for(int y=-2;y<=2;y++)
                if((i>m||abs(x)+abs(y)<=2)&&pd(x+a,b+y)) //abs()绝对值函数
                    s[x+a][b+y]++;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            str+=(s[i][j]==0);
    printf("%d",str);
    return 0;
}