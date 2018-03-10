#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,c,r;
    scanf("%d",&t);
    while(t--)
     {
        c=0;
        scanf("%d",&n);
        while(n)
         {
            c++;
            p=sqrt(n);
            r=pow(p,2);
            n=n-r;
         }
           printf("%d\n",c);
     }
    return 0;
}
