#include<iostream>
#include<cstdio>
using namespace std;
long long int coun=0,q=0;
long long int func(long long int p)
{
    coun+=q;
    if(p==1) return coun;
    if(p%2==0){
        q=p/2;
        return func(p/2);
    }
    else{
        q=p/2;
        return func(p/2+p%2);
    }
}
int main()
{
    long long int n,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=func(n);
        printf("%lld\n",sum);
        coun=0;
        q=0;
    }

    return 0;
}
