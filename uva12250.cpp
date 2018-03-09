#include<iostream>
#include<cstring>
#include<cstdio>
int main(){
char s[15];
int c=0;
while(1){
        c++;
    gets(s);
    if((strcmp(s,"#"))==0){
            break;
    }
    if((strcmp(s,"HELLO"))==0){
        printf("Case %d: ENGLISH\n",c);
    }
    else if((strcmp(s,"HOLA"))==0){
        printf("Case %d: SPANISH\n",c);
    }
    else if((strcmp(s,"HALLO"))==0){
        printf("Case %d: GERMAN\n",c);
    }
    else if((strcmp(s,"BONJOUR"))==0){
        printf("Case %d: FRENCH\n",c);
    }
    else if((strcmp(s,"CIAO"))==0){
        printf("Case %d: ITALIAN\n",c);
    }
     else if((strcmp(s,"ZDRAVSTVUJTE"))==0){
        printf("Case %d: RUSSIAN\n",c);
    }
    else
        printf("Case %d: UNKNOWN\n",c);
}

return 0;

}
