#include <stdio.h>
int main()
{
    int n,m,x,y,i,j; //x次轰炸，y个关键点
    int keyx,keyy,last=0,str=0;
    int x1[10000],x2[10000],y1[10000],y2[10000];
    scanf("%d %d %d %d",&n,&m,&x,&y);
    for(i=1;i<=x;i++)
    {
        scanf("%d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i]);
    }
    for(i=1;i<=y;i++)
    {
        str=0;
        scanf("%d %d",&keyx,&keyy);
        for(j=1;j<=x;j++)  //对每次轰炸进行遍历
        {
            if(keyx>=x1[j]&&keyx<=x2[j])
            {
                if(keyy>=y1[j]&&keyy<=y2[j])
                {
                    str++;
                    last=j;
                }
            }
        }
        if(str==0) printf("N");
        else printf("Y %d %d",str,last);
    }
    return 0;
}