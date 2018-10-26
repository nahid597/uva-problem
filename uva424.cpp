#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int s1,carry,c,mx=0;
    int sum1[1000],sum2[1000];

    memset(sum1,0,sizeof(sum1));

    while(1)
    {
        cin >> str;
        carry = 0;
        c = 0;
       // mx = -1;

        if(str == "0")
            break;


        int s = str.size();

        //cout << s << endl;

        for(int i = s-1; i >= 0; i--)
        {
            s1 = str[i] - 48;
            //cout << s1 ;

            sum1[c] = s1 + carry + sum1[c];
            carry = sum1[c]/10;
            sum1[c] = sum1[c]%10;
           // cout <<  sum1[c] << endl;
            c++;
            if(mx < c)
                mx = c;

        }

        if(carry > 0)
        {
            sum1[c] += carry % 10;
            c++;
            if(mx < c)
                mx = c;

        }

    }

    //cout << mx << endl;

     for(int i = mx-1; i>= 0; i--)
     {
         //cout << "nahid"<< endl;
         cout << sum1[i];
     }
     cout << endl;



 return 0;
}
