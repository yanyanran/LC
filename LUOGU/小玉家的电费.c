#include<stdio.h>
int main()
{
    int num;
    double money;
    scanf("%d",&num);
    if(num<=150)
    {
        money=num*0.4463;
    }else if(num>=151&&num<=400)
    {
        money=150*0.4463+(num-150)*0.4663;
    }else if(num>=401)
    {
        money=150*0.4463+250*0.4663+(num-400)*0.5663;
    }
    printf("%.1lf",money);
    return 0;
}