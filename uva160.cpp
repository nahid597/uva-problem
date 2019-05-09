#include<bits/stdc++.h>

using namespace std;


int factorialDigit(int n, int p)
{
    int ans = 0 , q, i = 0 ;

    //cout << n << p << endl;

    while(1)
    {
        i++;
        q = pow(p, i);

        //cout << q << endl;
        ans += n / q;


        if(n / q <= 0)
             break;
    }

  // cout << "fac: " << ans << endl;

    return ans;
}


void sieve (int n)
{
    int st = n;
    int isprime[1000], notprime[1000], nprime = 0;

    memset(isprime, 0 , sizeof(isprime));
    memset(notprime, 0 , sizeof(notprime));

    notprime[1] = 1;

    isprime[nprime++] = 2;

    for(int i = 4; i <= n; i = i + 2)
    {
        notprime[i] = 1;
    }

    int limit = sqrt(n) + 2;

    for(int i = 3; i <= n; i = i + 2)
    {
        if(!notprime[i])
        {
            isprime[nprime++] = i;

            if( i <= limit)
            {
                for(int j = i*i; j <= n; j += 2 * i )
                {
                    notprime[j] = 1;
                }
            }
        }
    }

    if(st < 10)
    {
        cout << "  " << st << "! =" ;
    }

    else if( st >= 10 && st < 100)
    {
        cout << " " << st << "! =" ;
    }


    else
        cout << st << "! =" ;

    int cnt = 0;

    for(int i = 0; i < nprime; i++)
    {

       cnt++;
       // cout << isprime[i] << " ";

       if(st == 1)
       {

       }

       else {

          int ans = factorialDigit(st, isprime[i]);

          if(ans < 10 && cnt <= 15)
          {
            cout << "  "<<ans;
          }

          else if(cnt <= 15)
          {
            cout << " "<<ans;
          }

          else if(cnt == 16)
          {
            cout << endl ;
            cout << "        " << ans;
            cnt = 0;
          }

         else if(ans < 10 && cnt >= 15)
          {
            cout << "  "<<ans;
          }

          else if(cnt >= 15)
          {
            cout << " "<<ans;
          }

     }

    }

    cout << endl;

}


int main()
{
    //freopen("uva160.txt", "r" , stdin);
    //freopen("uva160out.txt", "w", stdout);
    int n;


    while(cin >> n)
    {
        if(n == 0)
          break;
        sieve(n);
    }

    return 0;
}
