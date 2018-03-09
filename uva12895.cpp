#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
long long int n,t,p,q,k,x,m,a;
scanf("%lld",&t);
while(t--){
        k=0;
        x=0;
    scanf("%lld",&n);
    m=n;
    a=n;
    while(n){
        p=n/10;
        n=n/10;
        k++;
    }
    while(m){
        q=m%10;
         m=m/10;
           x=x+pow(q,k);
    }
    if(x==a)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}
return 0;
}
