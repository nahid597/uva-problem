#include<stdio.h>
int main(){
int i,n,a,b,t,sum;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d%d",&a,&b);
    sum=0;
      if(a%2==0)
            a=a+1;
         if(b%2==0)
            b=b-1;
        for(t=a;t<=b;t=t+2){
            sum=sum+t;
        }

    printf("Case %d: %d\n",i,sum);

}

    return 0;
}
