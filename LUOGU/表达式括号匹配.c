#include <stdio.h>
int main()
/*只配拥有40分
{
    char a;
    int r=0,l=0;
    while(a=getchar()!='@')
    {
        if(a=='(') r++;
        if(a==')') l++;
    }
    if(r==l) printf("YES");
    else printf("NO");
    return 0;
}*/

/*70分
{
    int lo,l,r;
    char a[300];
    scanf("%s",a);
    lo=strlen(a);
    for(int i=0;i<lo;i++)
    {
        if(a[i]=='(')
            l++;
        if(a[i]==')')
            r++;
    }
    if(l==r)
        printf("YES");
    else
        printf("NO");
    return 0;
}*/

{
	int i=0,flag=0;
	char a;
   	for(;;i++)
   	{
       a=getchar();
       if(i==0&&a==')') //直接上来就是右括号NO
       {
       	 printf("NO");
       	 break;
	   }
       if(a=='(') flag++;
       if(a==')') flag--;
       if(flag<0)  //flag<0 NO
       {
       	printf("NO");
       	break;
	   }
       if(a=='@')   //读到@判断
	    {
           if(flag==0){
               printf("YES");
               break;
           }
           else{
           		printf("NO");
           		break;
		   }  
       }
    }
    return 0;
}

//用栈解决
{
    int s[100];//栈 
    char a[300];//表达式 
    int i,j=-1,flag=0;//flag==0表示括号匹配，否则不匹配 
    scanf("%s",a);
    for(i=0;a[i]!='@';i++)
    {
        if(a[i]=='(')
        {
            s[++j]=i;//遇到左括号则将下标入栈 
        }
        else if(a[i]==')')
        {
            if(j>=0) j--;//栈不为空 
            else {
                flag=1;//匹配失败 
                break;
            }
        }
    }
    if(j>=0) flag=1; //栈不为空 
    if(flag==1) printf("NO\n");
    else printf("YES\n");
    return 0;
}  