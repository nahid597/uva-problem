#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int r,s,q,a,i;
  char  c[1050];
  while(cin >> c){
      r=0;
      if(c[0]=='0')
        break;
      else{
  s=strlen(c);
  for(i=0;i<s;i++){
    q=r*10+c[i]-'0';
    a=q/11;
    r=q%11;
  }
      }
      if(r!=0)
    cout<< c <<" "<< "is not a multiple of 11." << endl;
    else
         cout<< c <<" "<< "is a multiple of 11." << endl;
      }

    return 0;
}
