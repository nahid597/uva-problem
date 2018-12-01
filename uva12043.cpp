
#include<bits/stdc++.h>

using namespace std;

long long  store[100001];
void divisor(long long  n) {

    long long  Count = 0,p = 1;

    memset(store, 0, sizeof(store));

  // long long   root = sqrt(n) + 30;

    for(long long  i = 2; i<= n + 1; i++)
    {
        Count = 0;

       while(1) {
            if(n % i == 0)
            {
                Count++;
                n = n / i;
            }
            else
                break;
       }

       store[i] = Count;

    }
}

int main()
{
    //freopen("uva12043.txt","r", stdin);
   // freopen("uva12043out.txt","w",stdout);
    long long  n,ans = 1,sum =1,Count = 0,check = 0;

    long long  t, a, b, k;

    cin >> t;

    while(t--)
    {
        cin >> a >> b >> k;
        long long  divisornumber = 0, divisorsum = 0;

         for(long long  i = a; i<= b; i++)
         {
             if(i % k == 0)
             {
                 sum = 1;
                 ans = 1;
                 check = 0;

                 divisor(i);

            //    long long   root = sqrt(i) + 30;

                for(long long  j = 2; j <= i + 1; j++ )
                {
                    if(store[j] != 0)
                    {
                        check = 1;
                        ans *= store[j] + 1;
                      // cout << i << "^" << store[i] << endl;

                       sum *= (pow(j,store[j]+1)-1) / (j-1);

                    }


                }

                   // cout << i << " "<< check << endl;
                if(!check && i != 1)
                {
                    ans = 2;
                    sum = i + 1;
                }

                divisornumber += ans;
                divisorsum += sum;

               // cout << ans << " " << sum <<endl;

             }


         }

        cout << divisornumber << " " << divisorsum <<endl;


    }


    return 0;
}
