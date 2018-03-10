#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k[105],i,m,j,coun,sum,x,y;
    string s;
    char c[105];
    cin >> t;
    while(t--)
    {
        coun=0;
        sum=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> c[i];
            cin >> k[i];
        }

        cin >> m;
        cin.ignore();
       // getchar();
        for(j=0;j<m;j++)
        {
            getline(cin,s);
             coun+=s.length();

        }
    for(i=0;i<coun;i++)
    {
        if(s[i]==c[i])
        {
            sum+=k[i];
        }
    }
    cout << sum << endl;

       x=sum/100;
       y=sum%100;

       cout << x <<"."<<y<<"$"<< endl;


    }


    return 0;
}
