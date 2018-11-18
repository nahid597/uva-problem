
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long ans,r,p;

    while(1)
    {
        ans = 0;

        cin >> s;
        if(s == "0")
            break;

        int sz = s.size();
        p = sz;

        for(int i = 0; i < sz; i++)
        {
            r = s[i] - 48;
            ans += r * (pow(2,p) - 1);
            p--;
        }

        cout << ans << endl;


    }





    return 0;
}
