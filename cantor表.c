#include <stdio.h>
int main()
{
	int i, j, n, m;
	scanf("%d", &i);
	for(j = 0; (1 + j) * j / 2.0 < i; j++); 
	n = j - 1;
	n = (1 + n) * n / 2.0;
	m = (1 + j) * j / 2.0;
	m = m - i + 1;
	n = i - n;
	if(j % 2 == 0)
		printf("%d/%d", n, m);
	else
		printf("%d/%d", m, n);
	return 0;
}  
