#include <stdio.h>
int main()
{
    int n[100];
    int i;
    int tth;
    int str;
    for(i=0;i<10;i++)  //注意数组下标从0开始所以循环条件为<而非<=
    {
        scanf("%d",&n[i]);
    }
    scanf("%d",&tth);
    int max=tth+30;
    for(i=0;i<10;i++)
    {
        if(n[i]<=max)
            str++;
    }
    printf("%d",str);
    return 0;
}