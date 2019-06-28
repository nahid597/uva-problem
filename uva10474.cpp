#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , q, c = 0;

    while(scanf("%d%d", &n , &q) == 2)
    {
       c++;

        if(n == 0 && q == 0)
          break;

       int cnt = 0;

       int x[n+1], y[q+1];

       for(int i = 0; i < n; i++)
       {
           scanf("%d", & x[i]);
       }

       for(int i = 0; i < q; i++)
       {
           scanf("%d", & y[i]);
       }

       sort(x , x + n);

       int st, ch = 0, ca = 0;

       for(int i = 0; i < q; i++)
       {
         // scanf("%d", & y[i]);
         //ca = 1;
         //cout << y[i] << endl;
           ch = 0;
           cnt = 1;
          for(int j = 0; j < n; j++)
          {
             // cnt++;
             if(y[i] == x[j])
             {
                //cnt++;
                ch = 1;
                break;
             }

             else
             {
               cnt++;
             }
          }

          if(!ca)
          {
            cout << "CASE# " << c << ":"<<endl;
            ca = 1;
          }


            if(ch)
            cout << y[i] << " found at " << cnt << endl;
           else
              cout << y[i] << " not found" << endl;
       }




    }


   return 0;
}
