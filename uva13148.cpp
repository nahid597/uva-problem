#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int x[25]={1,64,729,4096,15625,46656,117649,262144,531441,1000000,1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000,85766121};
    int i;
    long long n;
    while(scanf("%lld",&n)==1 && n){
            int ck=0;
        for(i=0;i<=21;i++){
        if(n==x[i]){
           ck=1;
            break;
        }
        }
        if(ck)
             printf("Special\n");
        else
            printf("Ordinary\n");
    }
return 0;
}
