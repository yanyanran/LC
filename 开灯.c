/*
#include<stdio.h>
int main()
{
    int n,t,i,j;
    double a[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %d",&a[i],&t);
        for(j=1;j<=t;j++)
        {
            long long num=a[i]*j;
            if(a[num]==0)
            {
                a[num]==1;
            }else if(a[num]==1)
            {
                a[num]==0;
            }
        }
    }
    for(i=i;i<=10000;i++)
    {
        if(a[i]==1)
        {
            printf("%d",i);
            return 0;
        }
    }
}*/
#include<stdio.h>
int main()
{
    int n,t;
    long long T;
    double a;
    double ai[2000010];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	scanf("%lf%d",&a,&t);
    	for(int j=1;j<=t;j++){
    		T=a*j;
    		if(ai[T]==0)  ai[T]=1;
    		else ai[T]=0;
		}
	}
	for(int i=1;i<=2000000;i++){
		if(ai[i]==1){
			printf("%d",i);
			return 0;
		} 
	}
    return 0;
}