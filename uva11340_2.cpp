#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p,i,m;
    string s;
    char c;
    map <char,int>mp1;
    map<char,int>mp2;
    map<char,int> :: iterator it;
    cin >> t;
    ofstream f1("uva11340.txt");
    while(t--)
    {

        cin >> n;
        for(i=0;i<n;i++)
        {

            cin >> c;
            cin >> p;
            mp2[c]=p;

        }
            cin >> m;
            cin.ignore();

            for(i=0;i<m;i++)
            {
                getline(cin,s);
                for(int j=0;j<s.size();j++)
                {

                    mp1[s[j]]++;
                }
            }
          int  sum=0;
            for(it=mp2.begin();it!=mp2.end();it++)
            {
              sum+=it->second * mp1[it->first];
            }

            /*
           double y = 1.00*sum/100;

            printf("%.2lf$\n",y);*/

            mp1.clear();
            mp2.clear();

    }

    return 0;
}
