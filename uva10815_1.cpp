#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map <                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 string ,int> mp;
    while(getline(cin , str) )
        {
            for(int i=0;i<str.size();i++){
                    if(isalpha(str[i])){
                    str[i]=tolower(str[i]);
                    }
                    else
                        str[i]=' ';
                 }
                 stringstream ss(str);
                    while(ss >> str)
                        {
                            mp[str];
                        }
        }
        map < string , int >:: iterator it;
            for(it=mp.begin();it!=mp.end();it++)
                {
                    cout << it->first << endl;
                }
    return 0;
}

