//上一层6s，下一层4s，开门5s，下一个人1s
/*错误
#include<stdio.h>
int main()
{
    int n,sum,L,flag=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&L);
        if(L>flag)
        {
            sum+=(L-flag)*6+6;
            flag=L;
        }else if(L==flag)
        {
            sum+=1;
        }else if(L<flag)
        {
            sum+=(flag-L)*4+6;
            flag=L;
        }
    }
    printf("%d",sum);
    return 0;
}*/

//AC桶排思想
#include <stdio.h>
int main()
{
    int n,a,sum,max=0; //n:人数，a:这人要去几层，max:最高楼层
    int s[100000000]; //楼层桶
    s[0]=1; //0层不需要开门
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(s[a]==0) sum+=5;//s[a]==0意思是这个楼层还没上过，当然要开一次门
        s[a]=1;//不管怎样，标记一下
        if(a>max) max=a;//找最高楼层
    }
    sum+=n; //每个人都要下去，所以加的时间一定等于n
    sum+=max*10; //上6下4，共10s，所以最高楼层*10
    printf("%d",sum);
    return 0;
}