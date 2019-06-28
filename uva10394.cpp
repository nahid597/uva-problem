#include<bits/stdc++.h>

using namespace std;

#define mx 20000000

int isPrime[mx+2], mark[mx+2], nprime = 0;

vector < pair<int, int > > vec;
//vec.reserve(100000);

void sieve()
{

   int limit = sqrt(mx) + 2;
   mark[1] = 1;

   for(int i = 4; i <= mx; i += 2)
   {
      mark[i] = 1;
   }

   isPrime[nprime++] = 2;

   for(int i = 3; i <= mx; i += 2)
   {
       if(!mark[i])
       {
           isPrime[nprime++] = i;
           mark[i] = 1;

           if(i < limit)
           {
              for(int j = i * i; j <= mx; j += i * 2)
              {
                 mark[j] = 1;
              }
           }

       }
   }

    // cout << nprime << endl;

    for(int i = 1; i <= nprime; i++)
       {
           if(isPrime[i] - isPrime[i-1] == 2)
           {
               vec.push_back( {isPrime[i],isPrime[i-1]});
           }
       }

}

int main()
{
    sieve();

    int n;

    while(cin >> n)
    {

        printf("(%lld, %lld)\n", vec[n - 1].second, vec[n - 1].first);


    }

   return 0;
}
