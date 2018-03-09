#include<stdio.h>
#include<string.h>
int main(){
    int i,c=0;
    char s[20];
    while(1)
    {
        scanf("%c",s);
        if(s=='H')
            printf("Case %d: Hajj-e-Akbar\n",c);
            if(s=='U')
                 printf("Case %d: Hajj-e-Asghar\n",c);
            if(s=='*')
                break;

    }


return 0;
}

