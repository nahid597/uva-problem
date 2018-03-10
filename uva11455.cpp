#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream f1("11455.txt");
    int t,a,b,c,d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        if(a==b && b==c && c==d)
            cout << "square" << endl;
        else if((a==c && b==d) || (a==b && c==d)|| (b==c && a==d))
            cout << "rectangle" << endl;
        else if(a+b+c > d && b+c+d > a && c+d+a > b && a+b+d > c)
            cout << "quadrangle" << endl;
        else
            cout << "banana" << endl;


    }





    return 0;
}
