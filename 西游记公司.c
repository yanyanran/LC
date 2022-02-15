#include <stdio.h>
#include <stdlib.h>
long long a2,b2,c2,s2;
long long a1,b1,c1,s1;
long long k,ans;
int main()
{
	scanf("%lld:%lld:%lld\n%lld:%lld:%lld",&a1,&b1,&c1,&a2,&b2,&c2);   //可以用cin，但是像这样用scanf也是可以的，要注意中间穿插的字符
	s1=a1*3600+b1*60+c1;  //将时间转化为秒数（更方便计算）
	s2=a2*3600+b2*60+c2;  //同样的将时间转化为秒数
	scanf("%lld",&k);     //读入可以偷的电脑数量
	ans=k*(s2-s1);        //计算出答案
	printf("%lld",ans);   //输出
	return 0;             //注意要终结程序
} 
