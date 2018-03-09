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

                if(c[i][j]=='<'||'>')
                {
                    for(int p=i;p<5;p++)
                    {
                        for(int k=0;k<5;k++)
                        {
                           if(c[p][k]=='|')
                           {
                              for(int s=0;s<5;s++)
                              {
                                  if(c[p][s]=='>'||'<')
                                  {
                                    cout<<"Case"<<" "<<s<<":"<<" "<<"No Ball"<<endl;

                                  }

                                  else
                                  {
                                    cout<<"Case"<<" "<<s<<":"<<" "<<"Thik Ball"<<endl;

                                  }
                              }
                           }
                        }
                    }

                }
            }
            break;
        }





    }
}
