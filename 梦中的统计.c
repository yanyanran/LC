#include <stdio.h>
int main()
{
    int n,m,i,j;
    int str[10]={0};   //数组需要初始化不然不AC
    scanf("%d %d",&m,&n);

    /*错误核心
    for(i=m;i<=n;i++)
    {
        while(i/10>0)
        {
            j=i%10;
            str[j]++;
            i=i/10;
        }
    }*/
    for(i=m;i<=n;i++)
    {
        j=i;
        while(j!=0)
        {
            str[j%10]++;
            j=j/10;
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",str[i]);
    }
    return 0;
}