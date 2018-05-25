#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int x[600000],n,check = 2;
   x[1] = 1;
   x[2] = 2;

   for(int i = 3; i<= 500000; i++)
        {
            if(i < check)
                check = 2;

            x[i] = check;

            check += 2;
        }

   while(scanf("%d",&n) && n)
   {
        cout << x[n]<<endl;

   }


    return 0;
}
