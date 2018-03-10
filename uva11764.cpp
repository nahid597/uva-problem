#include<bits/stdc++.h>
using namespace std;
int main(){
 int h,l,c=0,n,x[100],t,i,j,b,a;
 scanf("%d",&t);
 while(t--){
        c++;
        h=0;
        l=0;
  scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
      a=x[0];
    for(i=0;i<n;i++){
        if(a<x[i]){
        h++;
        a=x[i];
        }
         else if(a>x[i]){
         l++;
         a=x[i];
        }
    }
    if(n==1)
        printf("Case %d: %d %d\n",c,h,l);
        else
             printf("Case %d: %d %d\n",c,h,l);

 }
return 0;
}
