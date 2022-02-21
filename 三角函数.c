/*
三角形最小边对应最小角，
因为三边满足勾股定理，即直角三角形，所以
最小角的正弦值=最小边/最大边
*/
#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b) //abc排序，排完a最大c最小
    { 
		t=a; //t暂存小的
        a=b; 
        b=t;
	}
	if(a<c)
    {
		t=a; 
        a=c; 
        c=t;
	}
	if(b<c)
    {
		t=b; 
        b=c; 
        c=t;
	} 
	for(int i=1;i<a/2;i++) //要化简，找a和c最大公因数，不然有个测试点过不去
    {
		if(a%i==0&&c%i==0)
        {
			t=i;
		}
	}
	printf("%d/%d",c/t,a/t);  //a和c约分，化为最简
	return 0;
} 
