#include<bits/stdc++.h>
using namespace std;
int main()
{
     char str[110];
    int t,n,j;
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++)
        {
            if(j!=1) cout << endl;
          while( gets(str)!='\0')
          {
            n=strlen(str);
            if(n==0) break;
            for(int i=0;i<n;i++)
                {
                    if(str[i]=='0'){
                        cout<< "O";
                    }

                   else if(str[i]=='1')
                        {
                        cout << "I";
                    }
                    else if(str[i]=='2'){
                        cout << "Z";
                    }
                     else if(str[i]=='3'){
                        cout<< "E";
                    }
                     else if(str[i]=='4'){
                       cout<< "A";
                    }
                     else if(str[i]=='5'){
                        cout << "S";
                     }
                        else if(str[i]=='6'){
                        cout << "G";
                    }
                      else if(str[i]=='7'){
                        cout<< "T" ;
                    }
                     else if(str[i]=='8'){
                        cout<< "B";
                    }

                     else if(str[i]=='9'){
                       cout<< "P";
                     }

                   else
                        cout << str[i] ;
            }
            cout << endl;
          }
        }
    return 0;
}

