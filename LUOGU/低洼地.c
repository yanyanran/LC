#include <stdio.h>
int main()
{
    int n,str[10005],i,j,k;
    int cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=2;i<n-2;i++)
	{
		j=i+1,k=i-1;
		if (str[j]>str[i]&&str[k]>str[i])
		{
			cnt++;
			continue;
		}else if(str[k]==str[i]&&str[j]>str[i])
		{
			while (str[k]==str[i])
			{
				k++;
			}
			if(str[k]>str[i]) 
            cnt++;
			continue;
		}
	}
	printf("%d",cnt);
	return 0;
}