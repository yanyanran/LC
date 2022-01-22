/*
#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,str[10005];
    int flag=0;
    scanf("%d",&n);
    if(n>=1&&n<=1000)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",str[i]);
            int sum=abs(str[i]-str[i+1]);
            if(sum==n-1)
            {
                flag=1;
                printf("Jolly");
                return 0;
            }
        }
    }
    if(flag==0)
    {
        printf("Not jolly");
    }
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a[1000];
   int i,j,n;
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
      if(i>0)
        a[i-1]=abs(a[i]-a[i-1]); //取绝对值
   }
   for(i=1;i<n&&j!=n-1;i++)
   {
      for(j=0;j<n-1;j++)
      {
        if(a[j]==i)
            break;
      }
   }
   if(i==n)
      printf("Jolly");
   else
      printf("Not jolly");
   return 0;
}