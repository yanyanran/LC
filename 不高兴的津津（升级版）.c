/*
20分只过了一个测试点
#include <stdio.h>
int main ()
{
    int n,num,c,i;
    scanf("%d",&n);
    int a[100],b[100];
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            scanf("%d %d",&a[i],&b[i]);
            continue;
        }else{
        scanf("%d %d",&a[i],&b[i]);
        c=a[i-1]+b[i-1]-8;
        num+=c+a[i]+b[i]-8;
        }
    }
    printf("%d",num);
    return 0;
}*/

//其实数组都不需要
#include <stdio.h>
int main ()
{
    int n,num,c,i;
    int a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        c+=+a+b-8;
        num+=c;
    }
    printf("%d",num);
    return 0;
}