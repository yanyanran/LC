#include <stdio.h>
int main() 
{
    int a[5]={0},i,f;  
    char ch[300]; 
    scanf("%s", ch); 
    for(i=0;ch[i]!=0;i++)
    {
        if(i%5==0) //f用于存储被赋值字母是哪一个 
        {
            if(ch[i]=='a') f=1; 
            else if(ch[i]=='b') f=2; 
            else f=3; 
        }
        if(i%5==3) //赋值
        {
            if(ch[i]=='a') a[f] = a[1]; 
            else if(ch[i]=='b') a[f] = a[2]; 
            else if(ch[i]=='c') a[f] = a[3]; 
            else a[f]=ch[i]-'0'; 
        }
    }
    printf("%d %d %d",a[1],a[2],a[3]); 
    return 0;
}