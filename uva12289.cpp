#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int c,t;
    char a[10];
    scanf("%d",&t);
    while(t--){
            c=0;
    scanf("%s",&a);
    if(strlen(a)==5)
        printf("3\n");
    else{
       if(a[0]=='o') c++;
        if(a[1]=='n') c++;
        if(a[2]=='e') c++;
    if(c>=2) printf("1\n");
    else
        printf("2\n");
    }
    }
return 0;
}
