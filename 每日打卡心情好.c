/*连续天数对应的值num
1 天：奖励 1
3 天：奖励 2
7 天：奖励 3
30 天：奖励 4
120 天：奖励 5
365 天：奖励 6
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,str,str0,num=0;
    int a[100000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            if(str0>0) str=str-pow(2,str0-1);
            if(str<0) str=0;      //要考虑str小于0的情况
            str0=0;
            str++;

            if(str<3) num+=1;
            if(str>=3&&str<7) num+=2;
            if(str>=7&&str<30) num+=3;
            if(str>=30&&str<120) num+=4;
            if(str>=120&&str<365) num+=5;
            if(str>=365) num+=6;
        }else if(a[i]==0){
            str0++;
            }
    }
    printf("%d",num);
    return 0;
}