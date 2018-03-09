#include<stdio.h>
int main(){
  long long  int n,c,d,sum;
  int k;
    scanf("%d",&k);
    while(k--){
        scanf("%lld",&n);

        d=n;
        c=0;
        while(1){
            sum=0;
            while(d>0){
                sum=sum*10+d%10;
                d=d/10;

            }
            if(n==sum)
                break;
            else
            {
                d=sum+n;
                n=sum+n;
                c++;

            }
        }
        printf("%lld %lld\n",c,n);

    }
     return 0;

    }
