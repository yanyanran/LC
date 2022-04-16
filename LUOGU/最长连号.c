#include<stdio.h>
int main()
{
    int n,str[10000],max,l;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(str[i+1]==str[i]+1)
        {
            l++;  
        }else if(l>=max)
        {
            max=l;
            l=1;
        };
    }
    printf("%d",max);
    return 0;
}