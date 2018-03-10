#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int q,r;
    while(cin >> s)
    {
        int n=s.length();

        r=0;
        for(int i=0;i < n ;i++)
        {
            q=r*10+s[i]-'0';
            r=q;
        }

        cout << q << endl;

    }





    return 0;
}
