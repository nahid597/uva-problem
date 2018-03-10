#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,q,p;
    while(scanf("%d",&n)==1){
             q=n;
            if(n%3==2)
            p=n+1;
        else
            p=n;
            while(p>=3){
                  q=q+p/3;
                  p=(p/3)+(p%3);
            }
            printf("%d\n",q);
    }
return 0;
}
