#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

void marge(int x[] , int l , int m, int r)
{
    int i, j, k;

    int nl = m - l + 1;

    int nr = r - m;

    int L[nl + 1], R[nr + 1];

    for(i = 0; i < nl; i++)
    {
        L[i] = x[l + i];
    }

    for(j = 0; j < nr; j++)
    {
      R[j] = x[m + j + 1];
    }

    i = 0;
    j = 0;
    k = l;

    while(i < nl && j < nr)
    {
        if(L[i] < R[j])
        {
           //cnt++;
            x[k] = L[i];
            i++;
        }
        else
        {
          // cout << L[i] << R[j] <<endl;
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

void margeSort(int x[], int l , int r)
{
    if(l < r)
    {
        int m = l + (r-l) / 2;

        margeSort(x, l , m);
        margeSort(x, m + 1 , r);

        marge(x, l, m , r);
    }
}

int main()
{
    int n ;

    while(cin >> n)
    {
        if(n == 0)
           break;

        int x[n+1];

        for(int i = 0; i < n; i++)
        {
           cin >> x[i];
        }

        margeSort(x, 0 , n - 1);

        cout << cnt << endl;

        if(cnt % 2 != 0)
        {
            cout << "Marcelo" << endl;
        }

        else
          cout << "Carlos" << endl;

        cnt = 0;

    }

    return 0;
}
