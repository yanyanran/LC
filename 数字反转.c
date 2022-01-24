/*#include <stdio.h>
int main ()
{
    int i=1,j,a;
    char str1[1000000005];
    gets(str1);
    if(str1[0]=='-')
    {
        putchar(str1[0]);
    }else i=0;
    j=strlen(str1);
    for(a=j-1;a>=j;a--)
    {
        if(str1[a]=='0')
        {
            continue;
        }else putchar(str1[a]);
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
	{
		printf("0");
		return 0;
	}
	if(a<0)
	{
		a=-a;    //反转为正数
		putchar('-');
	}
	while(a%10==0)
		a/=10;
	while(a)
	{
		printf("%d",a%10);
		a/=10;
	}
	return 0;
}
