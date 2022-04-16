#include <stdio.h>
int main()
{
    int n,a,num;
    int war[10000],str[10000],sum[10000];
    scanf("%d",&n);
    for(int i=0;i<7;i++)
    {
        scanf("%d",&a);
        war[a]++; //桶
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<7;j++)
        {
            scanf("%d",&str[i]);
            if(war[str[i]]>0) num++;
        }
        switch(num)
        {
            case 1:sum[6]++;num=0;break;
            case 2:sum[5]++;num=0;break;
            case 3:sum[4]++;num=0;break;
            case 4:sum[3]++;num=0;break;
            case 5:sum[2]++;num=0;break;
            case 6:sum[1]++;num=0;break;
            case 7:sum[0]++;num=0;break;
        }
    }
    for(int i=0;i<7;i++)
    {
        printf("%d ",sum[i]);
    }
    return 0;
}