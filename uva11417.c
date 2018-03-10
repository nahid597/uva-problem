#include<stdio.h>
int gcd(int i,int j){
    int p;
     while(i){
        p=j%i;
        j=i;
        i=p;
    }
    return j;
}
int main(){
    int i,j,p,n,g;
    while(scanf("%d",&n)==1){
            if(n==0)
            break;
          g=0;
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
    g+=gcd(i,j);
   }
    }
    printf("%d\n",g);
    }
return 0;
}
