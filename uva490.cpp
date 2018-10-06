#include<bits/stdc++.h>
using namespace std;

int main()
{

    char input[200] = "";
    string s[200] = "";

    int i = 0,range =0 , Max = 0;

    while(gets(input))
    {
        //range = strlen(input);

        if(input[0] == '\0')
            break;

            s[i] = input;
            i++;
    }

    for(int j = 0; j < i; j++)
    {
        range = s[j].size();

        if(Max <= range)
            Max = range;

    }

    cout << i << endl;

    for(int k = 0; k < Max; k++)
    {
        cout << s[i-1][k] << s[i-2][k]<<endl;
    }



    return 0;
}
