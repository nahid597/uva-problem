#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("uva10137.txt","r+",stdin);
    //freopen("uva10137out.txt","w",stdout);

    int n;

    double x[100000],sum ,avg,mn ,ans,pos,neg,df;

    while(cin >> n)
    {
        if(n == 0)
            break;

        pos =0;
        neg = 0;
        sum = 0;
        df = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
            //cout << x[i] ;
            //scanf("%lf",&x[i]);
        }

      //  cout << mn << endl;

        for(int i = 0; i < n; i++)
        {
           sum += x[i];
        }

        avg = sum / n;

      //  ans = avg - mn;

      for(int i = 0; i < n; i++)
        {

            df = (double) (long)((x[i] - avg)*100 ) / 100.0;
            if(df > 0 )
            {
                pos += df;
            }
            else
                neg -= df;
        }

            //cout << pos << " neg " << neg  << endl;
        if(pos > neg)
            ans = pos;
        else
            ans = neg;


            //cout << "anhid" << endl;
        //cout << ans << endl;
         printf("$%0.2lf\n",ans);



        }


    return 0;
}
