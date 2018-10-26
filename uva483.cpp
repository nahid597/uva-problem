
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("uva483.txt","r",stdin);
    freopen("uva483out.txt","w",stdout);

    char str[2000];
    string store;

    while(gets(str))
    {
        bool c = false;
        stringstream s(str);
        while(s >> store)
        {
            //cout << store << endl;
            reverse(store.begin(),store.end());
            if(c)
                cout << " ";
            cout << store;
            c = true;

        }

        cout << endl;
    }



    return 0;
}
