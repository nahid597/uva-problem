#include<stdio.h>
#include<string.h>
int main(){
    long long int n,tem,p,s,r;
    while(scanf("%lld",&n)==1){
     tem=0;
     r=n;
     char c[2];
     while(n){
     tem=tem*10+n%10;
     n=n/10;
     }

      if(tem<r){
        tem=c[0];
        tem=r;
        c[0]=r;
     }
       p=tem-r;
     s=p/9;

     printf("%lld - %lld = %lld = 9 * %lld\n",tem,r,p,s);


    }
return 0;
}
