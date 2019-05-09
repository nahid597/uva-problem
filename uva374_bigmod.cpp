
#include<bits/stdc++.h>

using namespace std;

long long bigmod (long long b , long long p , long long m)
{
    if(p == 0)
    {
        return 1 % m;
    }

    long long x = bigmod(b , p / 2 , m);

    x = (x * x ) % m;

    if(p % 2 == 1)
    {
        x = (x * b )% m;
    }

    return x;
}

int main()
{

   // freopen("uva374.txt" , "r" , stdin);
    //freopen("uva374out.txt" , "w" , stdout);


    long long b , p , m;

    while(cin >> b >> p >> m)
    {
        long long ans = bigmod(b, p , m);

        cout << ans << endl;

        //getchar();
    }

    return 0;
}
