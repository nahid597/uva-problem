#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int sum,n,mx,i,x[10002];
    while(scanf("%d",&n)==1 && n!=0){
            sum=0,mx=0;
     for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        sum+=x[i];
     if(sum>mx) mx=sum;
     else if(sum<0) sum=0;
     }
     if(mx>0)
     printf("The maximum winning streak is %d\n",mx);
    else
        printf("Losing streak\n");
    }
return 0;
}
