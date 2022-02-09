#include <stdio.h>
int main()
{
    int n,str1,strmax=1;
    int temp[10000000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp[i]);
        if(temp[i]>temp[i-1])
        {
            str1++;
        }else {
            str1=1;
        }
        if(str1>strmax)
        {
            strmax=str1;
        }
    }
    printf("%d",strmax);
    return 0;
}