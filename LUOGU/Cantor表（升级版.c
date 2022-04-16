#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2,t;
    char spc;

    scanf("%d",&a1); 
    spc=getchar();  //用来读‘\’号
    scanf("%d",&b1); 

    scanf("%d",&a2);
    spc=getchar();
    scanf("%d",&b2);

    c1=a1*a2;
    c2=b2*b1;

	t = c1<c2 ? c1:c2;   //找出分子分母的最小值
	for(int i=t;i>1;i--)
	{
		if((c1%i)==0&&(c2%i)==0)  //等价于 !(c1%i)&&!(c2%i)
		{
			c1/=i;
			c2/=i;
			break;
		}
	}
	printf("%d %d",c2,c1); //先列再行
	return 0;
}