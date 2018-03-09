#include<stdio.h>
    long long int func(j);
int main(){
    long long int n,p,q;
    int x,i,c;
    scanf("%d",&x);
    for(i=0;i<x;i++){
            c=0;
            scanf("%lld",&n);
            while(1){
            p=func(n);
            if(p==n)
                    break;
            else
            {
             q=n+p;
             c++;
               n=func(q);
            }
            }
    printf("%d %lld\n",c,q);
    }
return 0;
}
long long int func(j){
    long long int tmp=0;
     while(j){
            tmp=tmp*10+j%10;
            j=j/10;

     }
return tmp;

}
