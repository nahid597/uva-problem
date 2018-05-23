#include<bits/stdc++.h>
using namespace std;

int main()
{

  // freopen("uva1225.txt","r",stdin);
   // freopen("uva1225out.txt","w",stdout);

    vector < int > ch;

    int t, n,p,s,c;
    cin >> t;

    while(t--)
    {
        c = 0;
      cin >> n;

      for(int i = 1; i <= n; i++)
      {
          if( i > 9)
          {
             s = i;
             while(s)
             {
                 p = s % 10;
                 ch.push_back(p);
                 s = s / 10;
             }
          }
          else
            ch.push_back(i);

      }

      for(int i = 0; i< 10; i++)
      {
         for(int j = 0; j < ch.size(); j++)
        {
            if(ch[j] == i)
                c++;
        }

        cout << c ;
        if(i != 9)
            cout << " ";
        c = 0;

      }

      cout << endl;

      ch.clear();



    }



    return 0;
}
