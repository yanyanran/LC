#include<stdio.h>
#include<string.h>
int main()
{
    //boy girl
    char str[300];
    int i,num,strboy=0,strgirl=0;
    scanf("%s",str);
    num=strlen(str);
    if(num>=3&&num<=255)
    {
    for(i=0;i<num;i++)
    {
        if(str[i]!='.')
        {
            if(str[i]=='b')
            {
                strboy++;
            }
            if(str[i]=='o'&&str[i-1]!='b')
            {
                strboy++;
            }
            if(str[i]=='y'&&str[i-1]!='o')
            {
                strboy++;
            }
            if(str[i]=='g')
            {
                strgirl++;
            }
            if(str[i]=='i'&&str[i-1]!='g')
            {
                strgirl++;
            }
            if(str[i]=='r'&&str[i-1]!='i')
            {
                strgirl++;
            }
            if(str[i]=='l'&&str[i-1]!='r')
            {
                strgirl++;
            }
        } 
    }
    }
    printf("%d\n%d",strboy,strgirl);
    return 0;
}