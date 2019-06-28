#include<bits/stdc++.h>

using namespace std;

struct st {
    string st;
    int mas;
} a[105];

bool cmp (st a , st b)
{
    if(a.mas < b.mas) return a.mas < b.mas;
    return b.mas > a.mas;
}



int measure (string s)
{
   int cnt = 0;
   int sz = s.size();

   for(int i = 0; i < sz; i++)
   {
       for(int j = i + 1; j < sz; j++)
       {
          if(s[i] > s[j])
          {
            cnt++;
          }
       }
   }

   return cnt;
}

int main()
{

  // freopen("uva612.txt", "r" , stdin);
   //freopen("uva612out.txt" , "w" , stdout);
    int t;

    cin >> t;
    int ch = 0;

    while(t--)
    {
        int n , m;

        cin >> n >> m;
       // getchar();

        string s;


       // int n[100];

        for(int i = 0; i < m; i++)
        {
            cin >> s;
           // cout << s << endl;
           int p = measure(s);

            a[i].st = s;
            a[i].mas = p;

        }

        stable_sort(a , a + m , cmp);


        if(ch)
        {
            cout << endl;
        }

        ch = 1;

        for(int i = 0; i < m; i++)
        {
            cout << a[i].st<<endl;
        }
    }



    return 0;
}
