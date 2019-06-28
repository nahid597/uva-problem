#include<bits/stdc++.h>

using namespace std;

long long cnt = 0;

void marge(int x[], int l , int m , int r)
{
    int i, j , k;

    int nl = m - l + 1;
    int nr = r - m;

   // cout << nl << nr << endl;

    int L[nl + 1];
    int R[nr + 1];

    for( i = 0; i < nl; i++)
    {
       // cout << x[i] << endl;
        L[i] = x[i + l];
    }

    for( j = 0; j < nr; j++)
    {
        R[j] = x[ m + j + 1];
    }

    i = 0;
    j = 0;
    k = l;

    while(i < nl && j < nr)
    {
        if(L[i] <= R[j])
        {
           // cout << L[i] << " " << R[j]<< endl;
            x[k] = L[i];
            i++;
        }
        else
        {
           cnt += nl - i;
           x[k] = R[j];
           j++;
        }

        k++;
    }

    while(i < nl)
    {
        x[k] = L[i];
        i++;
        k++;
    }

    while(j < nr)
    {
        x[k] = R[j];
        j++;
        k++;
    }

}

void margesort(int x[] , int l , int r)
{
    if(l < r)
    {
        int m = l + (r-l) / 2;

        margesort(x, l, m );
        margesort(x, m + 1 , r);
        marge(x, l ,  m , r);
    }
}


int main()
{

   //freopen("uva10810.txt", "r", stdin);
   //freopen("uva10810out.txt", "w" , stdout);

   int n;

   while(cin >> n)
   {
       if(n == 0)
          break;


      int x[n + 1];

      for(int i = 0; i < n; i++)
      {
          cin >> x[i];
      }

      margesort( x , 0 , n - 1);

      cout << cnt << endl;

      cnt = 0;

   }

   return 0;
}
