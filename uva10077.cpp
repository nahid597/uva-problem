#include<bits/stdc++.h>

using namespace std;

int main()
{

  int n, m;

  while(cin >>  n >> m)
  {
      if(n ==  1 && m == 1)
         break;

      int a , b, c, d ,e ,f;
      a = 0;
      b = 1;
      c = 1;
      d = 0;
      e = 1;
      f = 1;

      while(1)
      {
         if(e == m && f == n)
            break;

          if(e * n > f * m)
          {
             cout << "R";
             b = e;
             d = f;
          }
          else
          {
            cout << "L";
            a = e;
            c = f;
          }

          e = a + b;
          f = c + d;
      }
      cout << endl;
  }

    return 0;
}
