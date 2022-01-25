//反过来刚开始有点头大，后来看了题解发现可以使用字符串和strlen函数划区间
#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,num,sum=0,s;
    char text[40000],str[200];    //text最终字符串，str缓冲字符串

/*输出的第一个数字是n，所以下面我们先计算n*/
    scanf("%s",str);
    n=strlen(str);
    printf("%d ",n);   //第一个输出n值

/*中间缓一下把字符都接起来*/
    strcat(text,str);       //将str连接到text后面
    for(i=2;i<=n;i++)       //把下面的也接上
    {
        scanf("%s",str);
        strcat(text,str);
    }

/*开始第二波输出个数*/
    s=strlen(text);
    num='0';
    for(i=0;i<=s;i++)
    {
        if(num==text[i])     /*判断这个字符是否与上一个字符相等*/
            sum++;               /*如果相等，sum加一*/
        else
        {
            num=text[i];
            printf("%d ",sum);    //反之输出sum，并初始化num与text
            sum=1;
        }
    }
    return 0;
}