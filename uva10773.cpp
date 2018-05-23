#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t ;
    double  d, u, v,t1,t2, to;
    cin >> t;
    for(int i = 1; i<= t; i++)
    {
       cin >> d >> v >> u;

       if(  u <= v || v == 0  || u == 0)
            cout << "Case "<< i << ": "<< "can't determine"<<endl;
        else
        {

            t1 = d / u;
            t2 = d / sqrt(u*u - v * v);

            to = abs(t1 - t2);

            printf("Case %d: %.3lf\n",i,to);

        }

    }


    return 0;
}
