#include <stdio.h>
int main()
{
    int i,yusuan=0,mom=0,me=0;
    for(i=1;i<=12;i++)
    {
        scanf("%d",&yusuan);
        me=me+300-yusuan;
        if(me<0)
        {
            printf("-%d",i);
            return 0;
        }else
        {
            mom=mom+me/100;
            me=me%100;
        }
    }
    printf("%d",me+120*mom);
    return 0;
}