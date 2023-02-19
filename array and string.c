#include<stdio.h>
int main()
{
    char ch[1024];
    int z=0,o=0,t=0,th=0,f=0,fi=0,s=0,se=0,e=0,n=0,ot=0;
    gets(ch);
    for(int i=0;i<=strlen(ch);i++)
    {
        if(ch[i]=='0')
            z++;
        else if ( ch[i]=='1')
            o++;
         else if ( ch[i]=='2')
            t++;
             else if ( ch[i]=='3')
            th++;
             else if ( ch[i]=='4')
            f++;
             else if ( ch[i]=='5')
            fi++;
             else if ( ch[i]=='6')
            s++;
             else if ( ch[i]=='7')
            se++;
             else if ( ch[i]=='8')
            e++;
             else if ( ch[i]=='9')
            n++;
            else
                ot++;

    }
    printf("%d %d %d %d %d %d %d %d %d %d",z,o,t,th,f,fi,s,se,e,n,ot);
}

