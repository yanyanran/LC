//这题的坑在与新烟的烟头也可以换烟

/*90分答法
#include <stdio.h>
int main ()
{
    int n,k;
    int str=0;
    scanf("%d %d",&n,&k);
    if(n>=k)
    {
        str=n/k;
    }
    if(str>=k)
    {
        str+=str/k;
    }
    int num=str+n;
    printf("%d",num);
    return 0;
}*/

#include<stdio.h>
int main()
{
	int n,k,i=1,str=0;//记录每次循环剩的烟蒂个数
	scanf("%d %d",&n,&k);
    
	int num=n;
	while(i>0)  //能整除就能一直换新烟
	{
		i=(n+str)/k;
		str=(n+str)%k;
		num+=i;//每次循环能换几只一直往上加就好了
		n=i;
	}
	printf("%d",num);
}
