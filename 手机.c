#include<stdio.h>
int main()
{
    char c;
    int i,str=0;
    for(;(c=getchar())!='\n';i++)
    {
        if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' ')
        str+=1;
        if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x')
        str+=2;
        if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y')
        str+=3;
        if(c=='s'||c=='z')
        str+=4;
    }
    printf("%d",str);
    return 0;
}