#include<iostream>
#include<cstdio>
using namespace std;
long long int s=0;
long long int func(long long int p)
{
    long long r;
    while(p)
    {
        r=p%10;
        p=p/10;
    s+=r*r;
    }
    return s;
}
int main()
{
    long long int t,c=0,n,sum,a;
    cin >> t;
    while(t--)
    {
        //sum=0;
        c++;
        cin >> n;
        a=n;
         while(1)
         {
             if(sum >= 4) break;
           sum=func(n);
           n=sum;
           cout << sum <<endl;
         }
           if(sum==1)
            printf("Case #%lld: %lld is a Happy number\n",c,a);
           else
                printf("Case #%lld: %lld is a Unhappy number\n",c,a);



    }


    return 0;
}
