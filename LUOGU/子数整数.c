#include <stdio.h>
int main()
{
    int k,flag=0;
    int sub1,sub2,sub3;
    scanf("%d",&k);
    if(k<1000&&k>0)
    {
    for(int i=10000;i<=30000;i++)
    {
        sub1=i/100;
        sub2=(i%10000)/10;
        sub3=i%1000;
        if((sub1%k==0)&&(sub2%k==0)&&(sub3%k==0))
        {
            flag=1;
            printf("%d\n",i);
        }
    }
    if(flag==0)
    {
        printf("No\n");
    }
    }
    return 0;
}