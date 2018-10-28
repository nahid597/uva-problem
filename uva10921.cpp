
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str, r = "";
    int l;

    while(getline(cin , str))
    {

        l = str.size();

        for(int i = 0; i < l; i++)
        {
            if(str[i] == '1')
                r += '1';
            else if(str[i] == '0')
                r += '0';
            else if(str[i] == '-')
                r += '-';

            else if(str[i] >= 65 && str[i] <= 67 )
                r += '2';
            else if(str[i] >= 68 && str[i] <= 70 )
                r += '3';
            else if(str[i] >= 71 && str[i] <= 73 )
                r += '4';
            else if(str[i] >= 74 && str[i] <= 76 )
                r += '5';
            else if(str[i] >= 77 && str[i] <= 79 )
                r += '6';

            else if(str[i] >= 80 && str[i] <= 83 )
                r += '7';

            else if(str[i] >= 84 && str[i] <= 86 )
                r += '8';

            else if(str[i] >= 87 && str[i] <= 90 )
                r += '9';

        }

        cout << r << endl;

        r = "";



    }



    return 0;
}
