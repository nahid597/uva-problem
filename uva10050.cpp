#include<bits/stdc++.h>

using namespace std;

int main()
{
  //freopen("uva10050.txt", "r", stdin);
  //freopen("uva10050out.txt", "w", stdout);

  int t, n, p;

  cin >> t;

  while(t--)
  {
     int cnt = 0, w = 6;
    cin >> n >> p;

    int pt[p+2], x[n+5];

    memset(x, 0 , sizeof(x));

    for(int i = 0; i < p; i++)
    {
       cin >> pt[i];
    }

     for(int i = 0; i < p; i++)
     {
        int s = pt[i];

        while(s <= n)
         {
                x[s] = 1;
                s += pt[i];
         }
     }

     for(int i = 1; i <= n; i++)
     {
       // cout << i << " " << x[i] << " " << w << endl;
        if(x[i])
        {
           //cout << i << " " << x[i] << " " << w << endl;;
           cnt ++;
           if(i%7 == 0 || i % 7 == 6)
           {
              cnt--;
           }
        }
     }

     cout << cnt << endl;

  }

  return 0;
}
