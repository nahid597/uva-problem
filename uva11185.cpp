#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    while(1)
    {

        cin >> n;

        int x[100000], c = 0;

        if(n < 0)
        {
            break;
        }

        if(n == 0)
        {
            cout << "0" ;
        }

        while(n)
        {
            x[c++] = n % 3;
            n = n / 3;
        }

        for(int i = c -1; i >= 0; i--)
        {
            cout << x[i];
        }

        cout << endl;

    }


    return 0;
}
