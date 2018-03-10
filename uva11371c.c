#include<stdio.h>
long long int fun(long long int n){
    long long int tem=0;
     while(n){
     tem=tem*10+n%10;
     n=n/10;
     }
     return tem;
    }
int main(){
    long long int n,t,p,s,r,q;
    while(scanf("%lld",&n)==1){
     r=n;
     q=fun(n);
        if(q<n){
            t=fun(q);
            p=t-q;
            printf("%lld - %lld = %lld = 9 * %lld\n",t,q,p,s);
        }
        else{
            p=q-r;
     s=p/9;
    printf("%lld - %lld = %lld = 9 * %lld\n",q,r,p,s);
        }
    }
return 0;
}

