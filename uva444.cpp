#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("uva444.txt","r",stdin);
    freopen("uva444out.txt","w",stdout);

    char str[1000];
    char store[1000] ;
    string sp;
    int num,n,len;

    while(cin.getline(str,10000))
    {
        sp = "";

       // if(str[0] == '\0')
          //  break;

            n = 0;
        if ( (str[0] -48) >= 0 && str[0]-48 <= 9)
        {
            len = strlen(str);
            reverse(str, str+len);
            for ( int i = 0; i < len; ++i)
            {
                n = n * 10 + str[i]-48;
                if ( (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32 || n == 33
                        ||n == 44 || n == 46 || n == 58 || n == 59 || n == 63)
                {
                    printf("%c",n);
                    n = 0;
                }
            }

            cout << endl;

        }


        else
        {

            for(int i = 0; i < strlen(str); i++)
            {

               int p = str[i];

               sprintf(store,"%d",p);

               sp += store;

            }

            int l = sp.size();

                for(int i = l-1; i >= 0 ; i--)
                    cout << sp[i];

                cout << endl;
        }

    }

    return 0;
}
