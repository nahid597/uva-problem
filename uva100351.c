#include<stdio.h>
int main(){
    long int a,b;
    int i,r=0,c,carry=0;
    while(scanf("%lld%lld",&a,&b)==2)
        {
        if(a==0&&b==0)
            break;
        else
        {
            for(i=1;i<16;i++)
            {
            if(a==0&&b==0)
            break;
            c=(a%10)+(b%10)+r;
            if(c>9){
                carry++;
                r=1;
            }
            else
            {

                r=0;
            }
            a/=10;
            b/=10;
    }
    if(carry==0)
        printf("No carry operation.\n");
    else if(carry==1)
        printf("1 carry operation.\n");
    else
        printf("%d carry operation.\n",carry);
        return 0;
}


 }
   }
















