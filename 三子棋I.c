#include <stdio.h>
int main(void)
{
	int c[9];		//棋盘，初始值为-1表示未开始，1表示小a下棋，0表示uim下棋
	int count=0;	//下棋的次数
	int record;		//棋谱

	for (int i=0;i<9;i++)
	{
		c[i]=-1;
	}
	scanf("%d",&record);
	while (record!=0)
	{
		count++;
		c[record%10-1]=count%2;
		record/=10;
	}
	if ((c[0] == c[1] && c[1] == c[2]) ||
		(c[3] == c[4] && c[4] == c[5]) ||
		(c[6] == c[7] && c[7] == c[8]) ||
		(c[0] == c[3] && c[3] == c[6]) ||
		(c[1] == c[4] && c[4] == c[7]) ||
		(c[2] == c[5] && c[5] == c[8]) ||
		(c[0] == c[4] && c[4] == c[8]) ||
		(c[2] == c[4] && c[4] == c[6]))
	{
		if (count%2==1) printf("xiaoa wins.\n");
		else printf("uim wins.\n");
	}else printf("drew.\n");
	return 0;
}
