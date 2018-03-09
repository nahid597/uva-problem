#include<stdio.h>
#include<string.h>
int main(){
    int i,c=0;
    char s[10];
    FILE* nahid;
    nahid=fopen("hasan.txt","w");
    while(1)
    {
        c++;
       scanf("%s",s);
         if(s[0]=='*') break;
        if(strcmp(s,"Hajj")==0)
            fprintf(nahid,"Case %d: Hajj-e-Akbar\n",c);
            else
                 fprintf(nahid,"Case %d: Hajj-e-Asghar\n",c);
    }
return 0;
}

