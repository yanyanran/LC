/*10分
#include<stdio.h>
int main()
{
    int n,i,j,str=0,a,b;
    int max=0;
    int flag=0;//判断有没有容身之地0没有1有
    int num[10001][10001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    printf("11111");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(num[i][j]==0)
            {
                str=0;
                flag=1;
                for(a=0;a<i;a++)
                {
                    if(num[a][j]==1) str++;
                }
                for(b=0;b<j;b++)
                {
                    if(num[i][b]==1) str++;
                }
                if(str>max)
                {
                    max=str;
                }
            }
        }
    }
    if(flag==1) printf("%d",max);
    if(flag==0) printf("Bad Game!");
    return 0;
}*/

#include<stdio.h>
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
};
int main()
{
    int n,str,d,f[1010][1010];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d",&f[i][j]); //输入
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(!f[i][j])          //是0才查找
            {
                str=0;
                for(int k=1; k<=n; k++)
                    str+=(f[i][k])+(f[k][j]);  //是1就++
                d=max(d,str);       //取最大值
            }	 
    printf("%d",d);
    return 0;
}
