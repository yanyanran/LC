#include <stdio.h>
int main()
{
    int n,m,z,c,str;
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==j)
            {
                z+=(n-i+1)*(m-j+1);
            }else c+=(n-i+1)*(m-j+1);
        }
    }
    printf("%d %d",z,c);
    return 0;
}