/*只有0和5 最大 
被90整除：末尾为0,各位相加为9的倍数（5的个树是9的倍数）*/
#include<stdio.h>
int main()
{
    int f,i,n,num0=0,num5=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&f);
        if(f==0) num0++;
        else num5++;
    }//计0和5个数；
    if(num0==0)
    {
        printf("-1"); 
        return 0;
    }//第一种情况，没有0，那么无法满足条件，输-1，结束程序。
    if(num5<9)
    {
        printf("0");
        return 0;
    }//第二种情况，5的个数不足9个，输0，结束程序。
    num5=num5-(num5%9);//要想数大5就尽量多要，个数要是9的倍数，减去对9取余的余数

    for(i=1;i<=num5;i++) printf("%d",5);
    for(i=1;i<=num0;i++) printf("%d",0);
    return 0;
}