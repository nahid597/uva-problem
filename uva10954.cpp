#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < long long int > vec;
    long long int sum,p,q;
    int n,i;
    while(scanf("%d",&n)==1 && n!=0)
    {
        sum=0;
        q=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&p);
            vec.push_back(p);
        }
        sort(vec.begin(),vec.end());

         for(i=0;i<n;i++)
        {
            sum+=vec[i];
            q+=sum;
        }
        if(n==1)
        {
            q=q;
        }
        else
            q=q-vec[0];
            printf("%lld\n",q);
        vec.clear();
    }
    return 0;
}
