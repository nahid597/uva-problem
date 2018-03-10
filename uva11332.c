#include<stdio.h>
int myfunc(int a);
int main(){
    int sum=0,x,p;
    long long a;
    while(1){
            sum=0;
        scanf("%lld",&a);
        if(a==0)
            break;
        else{
            while(a){
             x=a%10;
            a=a/10;
            sum=sum+x;
            }
         if(sum>=10)
           sum=myfunc(sum);
           if(sum>=10)
           {
               sum=myfunc(sum);
           }
        }
        printf("%d\n",sum);

    }

return 0;
}
int myfunc(int a){
    int x,sum=0;
                while(a){
            x=a%10;
            a=a/10;
            sum=sum+x;

        }
        return sum;
        }
