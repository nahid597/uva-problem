
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,t,d,l[10000],h[10000],p,q,c;
    string s[10000],s1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&d);
        for(i=0;i<d;i++)
        {
            cin>>s[i];
            scanf("%d%d",&l[i],&h[i]);
        }
        scanf("%d",&p);
        while(p--)
        {
            scanf("%d",&q);
            c=0;
            for(i=0;i<d;i++)
            {
                if(q>=l[i])
                    if(q<=h[i])
                    {
                        c++;
                        if(c>1)
                            break;
                        s1=s[i];
                    }
            }
            if(c==1)
                cout<<s1<<endl;
            else
                printf("UNDETERMINED\n");
        }
        if(t) printf("\n");
    }
    return 0;
}
