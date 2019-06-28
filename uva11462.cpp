#include<bits/stdc++.h>

using namespace std;

void countsort(int vec[] , int n)
{
    //vec.push_back(10);

    int mx = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        mx = max(mx , vec[i]);
    }

    int Count[mx + 1];

    memset(Count, 0 , sizeof(Count));

    for(int i = 0; i < n; i++)
    {
        Count[vec[i]]++;
    }

    for(int i = 1; i <= mx; i++)
    {
       Count[i] += Count[i - 1];
    }

    int output[n + 1];

    for(int i = 0; i < n; i++)
    {
        output[Count[vec[i]] - 1 ] = vec[i];
        Count[vec[i]]--;
    }

    for(int i = 0; i < n; i++)
    {
        vec[i] = output[i];
    }



   /* for(int i = 0; i <= mx; i++)
    {
        cout << "i " << i << " " << Count[i] << endl;
    }*/

   // cout << mx << endl;
}

int main()
{
    int n;

    int vec[2000001];

    while(cin >> n)
    {
        if( n == 0)
           break;

        int x;
        for(int i = 0; i < n; i++)
        {
           cin >> vec[i];
        }

        countsort(vec , n);

        for(int i = 0; i < n; i++)
        {
           cout << vec[i];
           if(i != n - 1)
             cout << " ";
        }

        cout << endl;

    }

}
