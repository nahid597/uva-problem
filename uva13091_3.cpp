#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[6][6];
    int t,s=0;
    cin >> t;
    while(t--)
    {
        bool f;
        s++;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin >> c[i][j];
            }
        }

        for(int i=0;i<5;i++)
        {

            for(int j=0;j<5;j++)
            {
                if(c[i][j]=='>')
                {
                    f=true;
                    for(int k=j+1;k<5;k++)
                    {
                        if(c[i][k]=='|')
                        {
                        cout<<"Case"<<" "<<s<<":"<<" "<<"Thik Ball"<<endl;
                        f=false;
                         break;
                        }
                    }
                    if(f)  cout<<"Case"<<" "<<s<<":"<<" "<<"No Ball"<<endl;

                }


                if(c[i][j]=='<')
                {
                    f=true;
                    for(int p=j+1;p<5;p++)
                    {
                         if(c[i][p]=='|'){
                             cout<<"Case"<<" "<<s<<":"<<" "<<"No Ball"<<endl;
                             f=false;
                             break;
                         }

                }
                if(f)  cout<<"Case"<<" "<<s<<":"<<" "<<"Thik Ball"<<endl;

            }

          }
       }
    }
    return 0;
}



