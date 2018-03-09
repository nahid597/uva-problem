#include<stdio.h>
#include<string.h>
int main(){
    int i,c=0;
    char s[10];
    while(1)
    {
        c++;
        for(i=-1;s[i]!='\n';){
               i++;
            scanf("%c",&s[i]);
        }
        if(s[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",c);
            if(s[0]=='U')
                 printf("Case %d: Hajj-e-Asghar\n",c);
            if(s[0]=='*')
                break;
    }
return 0;
}

