#include<stdio.h>
int main()
{
    int x,n,sum;   //周x 过了n天
    scanf("%d %d",&x,&n);
    /*int first=7-x;
    int week=(n-first)/7;
    sum=(first-2)*250+5*week*250;*/
    for(int i=1;i<=n;i++)
    {
        if(x!=6&&x!=7)
        {
            sum+=250;
        }
        if(x==7)
        {
            x=1;
        }else x++;
    }
    printf("%d",sum);
    return 0;
}
