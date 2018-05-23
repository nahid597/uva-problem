#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("10038.txt","r",stdin);
    //freopen("uva10038.txt","w",stdout);

    int n , ma , p , c ;
    while(scanf("%d",&n) == 1)
    {
        c = 0;
        ma = 0;
       int x[n+5],p[n+5];

       for(int i = 0 ; i < n; i++)
       {
           scanf("%d",&x[i]);
       }



       for(int i = 0 ; i < n; i++)
       {
           p[i] = abs(x[i + 1] - x[i]);

       }

       sort(p,p+n);


       for(int i = 0 ; i < n - 1; i++)
       {
           if(p[i] != i + 1)
           {
               c = 1;
               break;
           }

       }

       if(c)
         printf("Not jolly\n");
       else
       printf("Jolly\n");

    }


    return 0;
}
