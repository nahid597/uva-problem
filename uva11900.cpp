#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,i,p,q,x[31],c,sum,s=0;
    scanf("%d",&t);
    while(t--){
            s++;
            c=0;
            sum=0;
        scanf("%d%d%d",&n,&p,&q);
        for(i=0;i<n;i++){
            scanf("%d",&x[i]);
        }
        if(p>n)
            p=n;
        for(i=0;i<p;i++){
                sum+=x[i];
        if(sum<=q)
            c++;
        }
        printf("Case %d: %d\n",s,c);

    }
    return 0;
}
