#include<bits/stdc++.h>

using namespace std;

const int n = 8;
int c[10], diagonal1[10], diagonal2[10], queen[10], cnt = 0, store[100][100];

void nqueen(int pos)
{
    if(pos == n + 1)
    {
       cnt++;

       for(int i = 1; i <= n; i++)
       {
          //cout << queen[i] << " ";
          store[cnt][i] = queen[i];

       }
       //cout << endl;
       return;
    }

    for(int i = 1; i <= n; i++)
    {
       if(c[i] || diagonal1[i+pos] || diagonal2[n + i - pos])
          continue;

        queen[pos] = i;

        c[i] = diagonal1[i+pos] = diagonal2[n + i - pos] = 1;

        nqueen(pos + 1);

        c[i] = diagonal1[i+pos] = diagonal2[n + i - pos] = 0;
    }
}


int main()
{
   nqueen(1);


  int x[10], t = 0;

  while(cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4] >> x[5] >> x[6] >> x[7])
  {

     int mn = INT_MAX , ans = 0;

      for(int i = 1; i <= cnt; i++)
       {
          ans = 0;
          for(int j = 1; j <= n; j++)
          {
              //cout << store[i][j] << " ";
                 if(store[i][j] != x[j-1])
                   ans++;
          }
          mn = min(mn, ans);
       }

       t++;

       cout << "Case "<< t << ": "<< mn << endl;

  }

   return 0;
}
