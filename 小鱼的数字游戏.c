#include <stdio.h>
int main ()
{
    int s[100000],i,j;
    for(i=0;i<100000;i++)
    {
        scanf("%d ",&s[i]);
        if(s[i]==0)
        {
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",s[j]);
    }
    return 0;
}