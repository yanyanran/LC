/*
只有点在圆内才会需要：穿过圆的边界，否则绕过去就可以了（一个圆内和都在圆外面不用穿过）
判断点是否在圆内就是：点到圆心的距离小于半径
即求一个在圆内，另一个在圆外的圆的个数
*/
#include<stdio.h>
#include<math.h>  //用到sqrt开根
int x[60],y[60],r[60];
double dist(int x1,int y1,int x2,int y2)//求距离
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{
	int n,x1,y1,x2,y2,ans=0;

	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&x[i]);
	for(int i=1;i<=n;i++) scanf("%d",&y[i]);
	for(int i=1;i<=n;i++) scanf("%d",&r[i]);
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	for(int i=1;i<=n;i++)//每个圆都搜一遍
		if(((dist(x1,y1,x[i],y[i])<r[i])^((dist(x2,y2,x[i],y[i]))<r[i]))!=0)
        ans++;//两个点恰有一个在圆内，累加
	printf("%d",ans);
	return 0;
}