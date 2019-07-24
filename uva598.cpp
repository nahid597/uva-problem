#include<bits/stdc++.h>

using namespace std;

string str2[100], str, line;
int a, b,n,M;


void combination(int pos, int n, int k, int last, string ans)
{
   if(pos == k)
   {
      //cout << k << endl;
      for(int i = last; i < n; i++)
      {
        cout << ans << str2[i] << endl;
      }
      //cout << endl;

      return;
   }

   for(int i = last; i < n-k+pos; i++)
   {
     combination(pos + 1, n, k, i + 1, ans + str2[i] + ", ");
   }


}

int main()
{
   //string str;

   int t;

    scanf("%d\n\n", &t);

    while(t--)
    {

    getline(cin, line);
        if(line != "*") {
            if(sscanf(line.c_str(), "%d %d\n", &a, &b) == 1)
                b = a;
        } else a = 0, b = 0;

        for(int i = 0;; i++) {
            n = i;
            getline(cin, line);
            if(line.length() == 0) break;
            str2[i] = line;
        }

        if(a == 0 && b == 0) a = 1, b = n;
        if(a != 0 && b == 0) b = a;
        for(int i = a - 1; i < b; i++) {
            cout << "Size " << i + 1 << endl;
            combination(0, n, i,0, "");
            cout << endl;
        }

        if(t) cout << endl;


    }


    return 0;
}
