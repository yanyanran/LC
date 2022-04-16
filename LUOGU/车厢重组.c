#include <stdio.h>
int main()
{
    int n,num=0,i,j;
    scanf("%d",&n);
    int str[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                num++;
            }
        }
    }
    printf("%d",num);
    return 0;
}