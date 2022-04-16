/*错误
#include<stdio.h>
int main()
{
    int m,n,num,str,a;
    scanf("%d %d",&m,&n);
    num=n;
    while(num>9)
    {
        num=num/10;
        str++;
    }
    for(int i=str;i>=0;i--)
    {
        if(i==str)
        {
            for(int j=str;j>0;i--)
            {
                a=n/10;
            }
        }else for(int j=str;j>0;i--)
        {
            int b=n/10;
            if(j==0) a=b%10;
        }
        if(a==0) continue;
        printf("%d*%d^%d",a,m,i);
        if(i!=0)
        {
            printf("+");
        }
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int m;
    char c[1001];
    scanf("%d ",&m);
    gets(c); //用gets得到字符数组

    for(int i=0;i<strlen(c);i++)//数组遍历
    {
        if(i!=0 && c[i]!='0') printf("+");
        if(c[i]=='0') continue;
        printf("%c*%d^%d",c[i],m,strlen(c)-i-1);
    }
}