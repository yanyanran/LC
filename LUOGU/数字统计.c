
/*
#include<stdio.h>
int main()
{
    int L,R,str;
    scanf("%d %d",&L,&R);
    if(L<=100000&&R<=100000)
    {
    for(int i=L;i<=R;i++)
    {
        while(i)
        {
            int num=i%10;
            if(num==2)
            {
                str++;
            }
            i=i/10;
        }
    }
    }
    printf("%d",str);
    return 0;
}*/

#include <stdio.h>
int str(int w);
int main()
{
    int L,R;
    int i;
    int x;
    int num = 0;
    scanf("%d %d",&L,&R);
    for(i=L;i<=R;i++)
    {
        x=str(i);
        num=num+x;
    }
    printf("%d",num);
    return 0;
}
int str(int x)
{
    int y;
    int str=0;
    while(x!=0)
    {
        y=x%10;
        if(y==2)
        {
           str++;
        }
        x=x/10;
    }
       return str;
}

