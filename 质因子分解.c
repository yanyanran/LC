#include <stdio.h>
int n,a[10001];
void divi(int x)//分解质因数
{
    for (int i=2;i<=x;i++)//小于x就全部枚举
    {
        int t=i;//保存在临时变量中
        for (int j=2;j<=i;j++)//内循环枚举
        {
            while (t%j==0)//如果能整除
            {
                a[j]++;//标注不再为0
                t/=j;//除以j
            } 
        }
    }
}
void out()//输出
{
    for (int i=1;i<=n;i++) // 只要找小于n的就行了
    {
        if (a[i]!=0)//如果前面出现过了
        {
            printf("%d %d\n",i,a[i]);//先输出底数，再输出指数，注意千万不要忘了换行
        }
    }
}
int main()
{
    memset(a,0,sizeof(a));//初始化a数组
    scanf("%d",&n);//输入
    divi(n);//将n分解质因数
    out();//输出
    return 0;//结束整个程序
}