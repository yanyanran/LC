#include <stdio.h>
int main()
{
    int n,i,j;
    int cute[100000],str=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&cute[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(cute[j]<cute[i])
            {
                str++;
            }
        }
        printf("%d ",str);
        str=0;
    }
    return 0;
}