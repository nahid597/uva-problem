#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {

       int x[n+1];

        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        int cnt = 0 , temp;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                if(x[j] > x[j + 1])
                {
                   cnt++;
                   temp = x[j + 1];
                   x[j + 1] = x[j];
                   x[j] = temp;
                }
            }
        }

        cout << "Minimum exchange operations : " << cnt << endl;
    }

    return 0;
}
