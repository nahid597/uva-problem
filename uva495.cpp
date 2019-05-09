#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long unsigned f[5001];

        f[0] = 0;
        f[1] = 1;

    for(int i = 2; i <= 5001; i++)
        {
            f[i] = f[i-2] + f[i-1];
        }

    int n;

    while(cin >> n)
    {

        cout << "The Fibonacci number for " << n << " is " << f[n] << endl;

    }


    return 0;
}
