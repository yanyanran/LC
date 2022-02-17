//1、直接暴力函数展示题目公式
#include <stdio.h>
#include <math.h>
int main() 
{ 
    int n;
    double num;
    scanf("%d",&n);
    num=(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n))/sqrt(5);
    printf("%.2f",num);
    return 0;
}

//2、用斐波那契数列
#include <stdio.h>
int main()
{
    double f[50];
    int n,i;
    f[0]=0;
    f[1]=1;
    f[2]=1;
    scanf("%d",&n);

    for(i=3;i<=n;i++)  f[i]=f[i-1]+f[i-2];  //斐波那契数列
    printf("%0.2lf",f[n]);
    return 0;
}