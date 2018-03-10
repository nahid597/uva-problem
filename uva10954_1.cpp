#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int sum,p,a,b;
    int n,i;
    while(scanf("%d",&n)==1 && n!=0)
    {
        sum=0;
         priority_queue < long long int, vector < long long int >, greater< long long int > > st;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&p);
            st.push(p);
        }
         if(n==1) sum=p;
         else
            {
               while(st.size()>1)
            {
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                sum+=a+b;
                st.push(a+b);
            }
         }
            printf("%lld\n",sum);
    }
    return 0;
}

