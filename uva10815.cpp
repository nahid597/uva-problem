#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,s,st;
    char mara[100000];
    int j=0,sarah,i;
    set<string> mp;
    while(getline(cin , str) )
        {
            sarah=str.size();
            for(i=0;i<sarah;i++){

                    if(!isalpha(str[i]))
                    {
                        mara[j++]=' ';
                    }
                    else mara[j++]=tolower(str[i]);

                 }
                 mara[j]='\0';
                 str=mara;
                 stringstream ss(str);
                 while(ss>>str)
                 {
                     mp.insert(str);
                 }
        }

        set< string>:: iterator it;
            for(it=mp.begin();it!=mp.end();it++)
                {
                    cout<<*it<< endl;
                }
    return 0;
}
