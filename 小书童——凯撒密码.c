#include <stdio.h>
int main()
{
    char in[100]; 
    int n,i; 
    scanf("%d %s", &n, in);
    for(i=0;in[i]!='\0';i++)
    {
        putchar((in[i]-'a'+n)%26+'a'); 
    }
    return 0;
}
