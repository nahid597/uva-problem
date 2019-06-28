#include<bits/stdc++.h>

using namespace std;

int s1[1000], s2[1000], mn[1005];

int main()
{
    //freopen("uva10252.txt", "r", stdin);
   // freopen("uva10252out.txt", "w", stdout);

    vector < string > vec;

    string a, b;
    string x = "";

    while(getline(cin, a))
    {
        getline(cin, b);

        x = "";
       int sa = a.size();
       int sb = b.size();

        memset(s1, 0, sizeof(s1));
        memset(s2, 0 , sizeof(s2));
        memset(mn, 0 , sizeof(mn));

       for(int i = 0; i < sa; i++)
       {
          s1[a[i]]++;
         // cout << a[i] << " " << s1[a[i]] << endl;
       }

       for(int i = 0; i < sb; i++)
       {
          s2[b[i]]++;
       }

         //cout << sizeof(s1) / sizeof(s1[0]) << endl;


       for(int i = 0; i < sa; i++)
       {
          for(int j = 0; j < sb; j++)
          {
              if(a[i] == b[j])
              {
                  mn[a[i]] = min(s1[a[i]], s2[b[j]]);
              }
          }
       }

      //  int mn = min(s1[a[i], s2[b[i]]]);

     // cout << s1[65] << endl;

     //cout << mn << endl;

     int c = 0;

       for(int i = 0; i < sa; i++)
       {
         c = 0;
          for(int j = 0; j < sb; j++)
          {
              if(a[i] == b[j] && (mn[a[i]] != 0 ))
              {
                 x += a[i];
                 mn[a[i]]--;
                 break;
              }
          }
       }

      // vec.push_back(x);

       sort(x.begin(), x.end());


       cout << x << endl;

       //vec.clear();
    }


  return 0;
}
