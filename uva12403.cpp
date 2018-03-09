#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctype.h>
using namespace std;
int main(){
    char s[100],y[100];
    int i,n,j,sum=0,num;
    scanf("%d",&n);
     getchar();
    while(n-- && gets(s)){
        i=0;
        j=0;
        while(s[i]){
         if(isdigit(s[i]))
         {
           y[j++]=s[i];
         }
         ++i;
        }
        y[j]='\0';
              num=atoi(y);
                sum+=num;
              if(s[0]=='r'){
                printf("%d\n",sum);
             }
}
return 0;
}
