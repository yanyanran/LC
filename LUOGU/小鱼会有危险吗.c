/*80分，一个测试点没过（输入：3，4  输出：y）
#include <stdio.h>
int main()
{
    double s,x;
    double a,b;
    double sum=7.0,num=7.0;
    scanf("%lf %lf",&s,&x);
    a=s-x;
    b=s+x;
    for(int t=1;t!=0;t++)
    {
        sum*=0.98;
        num+=sum;
        if(num>=a&&num<=b)
        {
            sum*=0.98;
            num+=sum;
            if(num<=b)
            {
                printf("y");
                break;
            }else {
                printf("n");
                break;
            }
        }
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
	double s,x;
    double sum=0.0,go=7.0;
	scanf("%lf %lf",&s,&x);
    double a=s-x,b=s+x;

	for(go=7.0;sum+go<=a;go*=0.98)
    {
		sum+=go;
	}
    if(sum>a)
    {
		if(sum+go>b)
			printf("n");
		else
			printf("y");
	}else if(sum<a)
    {
		if(sum+go+go*0.98>b)
			printf("n");
		else 
			printf("y");
	}
	return 0;
}