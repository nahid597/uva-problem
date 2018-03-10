#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
int a,b,i,p,c;
while((scanf("%d%d",&a,&b)==2) &&a!=0 && b!=0){
        c=0;
        for(i=a;i<=b;i++){
        p=sqrt(i);
        if(sqrt(i)==p)
            c++;
        }
printf("%d\n",c);
}
return 0;
}
