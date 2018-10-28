#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t, n,bc,s,st,hc;

    cin >> t;

    while(t--)
    {
        bc = 0;
        hc = 0;

        cin >> n;

        s = n;

        while(n)
        {

            if(n % 2 != 0)
            {
               // s1 += 1 + 48;
                bc++;
            }

            n = n / 2;

        }

        while(s)
        {
            st = s % 10;
            s = s / 10;

            while(st)
            {

                if(st % 2 != 0)
                {
                    //s1 += 1 + 48;
                    hc++;
                }

                st = st / 2;

            }

        }



        cout << bc << " "<< hc << endl;

    }


    return 0;
}
