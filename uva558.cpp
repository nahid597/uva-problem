
#include<bits/stdc++.h>

using namespace std;

int main()
{

    //freopen("uva458.txt" , "r" , stdin);
    //freopen("uva458out.txt" , "w" , stdout);

    char input[1000] ;

    char  output[10000];

    while(gets(input))
    {

        int s = strlen(input);

        for(int i = 0; i < s; i++)
        {

            output[i] = int(input[i]) - 7;

        }


        for(int i = 0; i < s; i++)
        {
            cout << output[i];

        }

        cout << endl;

    }


    return 0;
}
