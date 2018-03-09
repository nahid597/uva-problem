#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,c=0,t,p;
     vector < int > vec;
     scanf("%d",& t);

     while(t--)
     {
         c++;
         scanf("%d",&n);
         for(int i=0;i<n;i++)
         {
             scanf("%d",& p);
             vec.push_back(p);
         }
            p=vec[0];
           for(int i=0;i<n;i++)
           {
                if(p<vec[i])
                    p=vec[i];
           }
           printf("Case %d: %d\n",c,p);

           vec.clear();

     }

    return 0;
}





