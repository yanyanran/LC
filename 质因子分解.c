#include<stdio.h>
int main()
{
    int n,a[10001];
    scanf("%d",&n);
    for(int i=2;i<=n;i++)//将n分解质因数
    {
        int t=i;
        for(int j=2;j<=i;j++)
        {
            while(t%j==0)//能整除
            {
                a[j]++;//标注不再为0
                t/=j;//除以j
            } 
        }
    }
    for(int i=1;i<=n;i++) //输出
    {
        if(a[i]!=0) printf("%d %d\n",i,a[i]);
    }
    return 0;
}
