#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m, n;

  while(cin >> m >> n)
  {
    int x[n+1], p[n+1];

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int sum, k ;

    int mx = m;

    for(int i = 0; i < n; i++)
    {
        sum = x[i];
        k = 1;
        //cout << "nahid" << endl;
       for(int j = 0; j < n; j++)
       {
          if(i != j)
            sum += x[j];

          cout << sum << " " << m <<  " x " << x[i] << " " << x[j] << endl;
          if(sum == m)
             break;

          if(sum > m)
          {
            // cout << sum << endl;
             sum -= x[j];
          }

          else
          {
            p[0] = x[i];
            p[k++] = x[j];
          }
       }

          if(sum == m)
             break;
    }

    for(int i = 0; i < k; i++)
    {
       cout << p[i] << " ";
    }

    cout << endl;

  }

   return 0;
}


