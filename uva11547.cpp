#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int t,c,q,n,r,s,w,p;
    scanf("%d",&w);
    while(w--){
            c=0;
        scanf("%d",&n);
        q=n*567;
        r=(q/9)+7492;
        s=r*235;
        t=(s/47)-498;
    while(1){
            p=t%10;
            t=t/10;
        c++;
    if(c==2)
        break;

    }
    if(p<0){
        p=p*(-1);
    }
    printf("%d\n",p);

    }

    return 0;
}

