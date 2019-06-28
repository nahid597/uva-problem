#include<bits/stdc++.h>

using namespace std;

int x[50005];

int cnt = 0, rangeIndex;

int binarysearch(int l, int h, int item)
{
    if(l > h  )
    {
        //cout << "nahid" << endl;
       // cout << l << " " << h << endl;
        rangeIndex = ceil( double (l + h)/2);
        return -1;
    }

    //cout << l << " " << h << endl;

    //cout << "nahid" << endl;

    int m = (l + h) / 2;

    if(x[m] == item)
    {
        cnt = m;
        return cnt;
    }

    if(item < x[m])
    {
      return  binarysearch(l , m -1 , item);
    }

    else
    {
      return  binarysearch(m+1 , h , item);
    }
}

int main()
{
   //freopen("uva10611.txt", "r", stdin);
   //freopen("uva10611out.txt", "w", stdout);

    int n, q;

        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        sort(x, x + n);

        cin >> q;
        int y[q + 1];

        for(int i = 0; i < q; i++)
        {
            cin >> y[i];

            int index = binarysearch(0 , n - 1, y[i]-1);
           // cout << "index "<< index << endl;
           // cout << "range " << rangeIndex<<endl;
           if(index != -1)
           {
                   cout << x[index];
           }

           else if(rangeIndex - 1 < 0)
           {
               cout << 'X' ;
           }

           else
              cout << x[rangeIndex-1];

              cout << " ";

            index = binarysearch(0 , n - 1, y[i]+1);

            if(index != -1)
           {

                   cout << x[index] ;
           }

           else if(rangeIndex == n)
           {
               cout << 'X' ;
           }

           else
              cout << x[rangeIndex];

            cout << endl;

        }


    return 0;
}
