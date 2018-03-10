#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ans;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {
        ans=1080;
        if(a==0 && b==0 && c==0 && d==0 ) break;
        else
            {
                if(a<b) ans+=(40+a-b)*9;
                else ans+=(a-b)*9;
                if(b>c) ans+=(40+c-b)*9;
                else ans+=(c-b)*9;
                if(c<d) ans+=(40+c-d)*9;
                else ans+=(c-d)*9;
                cout << ans << endl;
            }
    }
    return 0;
}
