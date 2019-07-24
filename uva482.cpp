#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
  string s;
  int n = 0, ch[10000],st;

  cin >> t;
  getchar();

  while(t--)
  {
     n = 0;
     int i = 1;
     getchar();

     getline(cin, s);

      stringstream ss;

      ss << s;

      while(ss >> st)
      {
        n++;
        //cout << st << endl;
        int p = st;
        //cout << p << endl;
        //cout << st - 48 << endl;
        ch[n] = p;
      }

      string store[n + 2];

      ss.clear();

      getline(cin, s);

      ss << s;

      while(ss >> store[ch[i]])
      {
         i++;
      }


      for(int i = 1; i <= n; i++)
      {
         //printf("%lf\n", xx[i]);
         cout << store[i] << endl;
      }

      if(t) cout << endl;



  }


  return 0;
}
