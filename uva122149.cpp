#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long p;
    while(cin >> n && n!=0)
    {
        p=0;
        clock_t start,end;
        start=clock();
        for(int i=1;i<=n;i++)
        {
           p+=pow(i,2);

        }

        cout << p << endl;
        end=clock();
        cout << "REUIED TIME IS:"<<(end-start)/(float)CLOCKS_PER_SEC<<endl;

    }

    return 0;
}
