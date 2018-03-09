#include<bits/stdc++.h>
using namespace std;
int main()
{

    ofstream f1("11946.txt");
     string str,name[110];
    int t,n,j=0,s[110],mx;
    scanf("%d",&t);
    getchar();
    while(t--)
        {
            mx=0;
          while( getline(cin , str))
          {
           name[j]=str;
           s[j]=name[j].length();
           mx=mx+s[j];
           j++;
          }
           cout << mx << endl;

            for(int i=0;i<mx;i++){

                    if(str[i]=='1'){
                        str[i]='I';
                    }
                     else if(str[i]=='3'){
                        str[i]='E';
                    }
                     else if(str[i]=='4'){
                        str[i]='A';
                    }
                     else if(str[i]=='9'){
                        str[i]='P';
                    }
                     else if(str[i]=='8'){
                        str[i]='B';
                    }
                   else if(str[i]=='0'){
                        str[i]='O';
                    }
                     else if(str[i]=='7'){
                        str[i]='T';
                    }
                     else if(str[i]=='6'){
                        str[i]='G';
                    }
                     else if(str[i]=='5'){
                        str[i]='S';
                    }
                   else if(str[0]=='2'){
                        str[0]='Z';
                    }
                    else if(str[i]=='2'){
                        str[i]='S';
                    }
            }
                    f1 << str << endl;
                    //cout << str <<endl;

        }
    return 0;
}
