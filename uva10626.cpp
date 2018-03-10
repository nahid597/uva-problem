#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[650];
    int j,c,m,a,r,g,i,t,k,s;
    cin>> k;
    while(k--){
            m=a=r=g=i=t=0;
     cin >> x;
    s=strlen(x);
    for(j=0;j<s;j++)
    {
        if(x[j]=='M'){
           m++;
        }
           else if(x[j]=='A'){
              a++;
            }
            else if(x[j]=='R'){

                r++;
             }
             else if(x[j]=='G'){
                g++;
              }
                  else if(x[j]=='I')
                 {
                    i++;
                 }
                  else if(x[j]== 'T'){
                    t++;
                  }
    }
    c=0;
        while(1){
           if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1){
            c=c+1;;
            m=m-1;
            a=a-3;
            r=r-2;
            g=g-1;
            i=i-1;
            t=t-1;
           }
           else
            break;
    }
    cout<< c <<endl;
    }
    return 0;
}
