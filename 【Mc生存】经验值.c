#include <stdio.h>
int main(void)
{
	int n;
	double sumH=10,downH;//总生命值、减少的生命值
	int LV=0,EXP=0,sumEXP; //等级、经验值和增加的经验值
	int up=1;	//每次升级所需的经验值
	scanf("%d", &n);

	for(int i=0;i<n;i++)
	{
		scanf("%lf %d",&downH,&sumEXP);
		if (sumH-downH<= 0) break; //若死亡，跳出循环
		sumH-=downH;
		EXP+=sumEXP;
		if (sumH>10) sumH=10;
	}

	while(EXP>=up)
	{
		EXP-=up;
		LV++;
		up*=2;
	}
	printf("%d %d",LV,EXP);
	return 0;
}