#include<bits/stdc++.h>

using namespace std;


int main()
{

    long long n;

    while(cin >> n)
    {

        long long log = log2(n-1);

        long long ans = n - 1 + log;

        cout << ans << endl;

    }

    return 0;
}
