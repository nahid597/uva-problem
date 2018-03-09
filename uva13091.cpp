#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[6][6];
    int t,s=0;
    cin >> t;
    while(t--)
    {
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
               if(c[i][j]=='<')
               {
                   cout << "nahif"<<endl;
                   cout<<"Case"<<" "<<s<<":"<<" "<<"No Ball"<<endl;
                   break;
               }

               if(c[i][j]=='|')
               {
                   if(c[i][j]=='>')
                   {
                   cout<<"Case"<<" "<<s<<":"<<" "<<"No Ball"<<endl;
                   break;
                   }
               }
               else ///if(c[i][j]!='.')
               {
                   cout<<"Case"<<" "<<s<<":"<<" "<<"Thik Ball"<<endl;
                   break;
               }

            }
         }


    }


    return 0;
}
