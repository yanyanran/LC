#include <stdio.h>
int main()
{
    int i,num1,num2,sum1=1,sum2=1;
    char str1[10],str2[10];

    gets(str1);  //字符串输入
    gets(str2);
    num1=strlen(str1);
    num2=strlen(str2);

    for(i=0;i<num1;i++)
    {
        sum1*=(str1[i]-64);
    }
    for(i=0;i<num2;i++)
    {
        sum2*=(str2[i]-64);
    }

    if(sum1%47==sum2%47)
    {
        printf("GO\n");
    }else
        printf("STAY\n");

    return 0;
}