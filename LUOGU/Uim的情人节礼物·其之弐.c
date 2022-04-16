#include<stdio.h>
int main()
{
    int n;
    char ch[10];
    int a[10],num=1,z=1,t;
    int str=1;
    scanf("%d",&n);
    scanf("%s",&ch);
    for(int i=0;i<n;i++)
    {
        a[i]=ch[i]-48; //字符串数组转为数字直接-48或-‘0’
    }
    for(int i=n-2;i>=0;i--) //康托展开
    {
        num*=(z++);
        t=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                t++;
            }
        }
        str+=t*num;
    }
    printf("%d",str);
    return 0;
}