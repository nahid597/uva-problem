#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,i,p,rev;
while(scanf("%d",&n)==1){
         printf("%d\n",n*2);
        rev=0;
         m=n;
    while(n){
    rev=(rev*10)+n%10;
    n/=10;
    }
    if(m==1)
        return 0;
    if(rev==m){
        for(i=2;i<=m;i++){
            p=rev%i;
           if(p==0)
               break;
        }
    }
      if(rev==i)
            break;
}
return 0;
}
