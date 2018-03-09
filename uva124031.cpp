#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,sum=0;
    char str[100],ch;
    while(gets(str)){
            //sum=0;
        if(str[0]=='d'){
            sscanf(str,"%s%c%d",str,&ch,&n);
            sum=sum+n;
        }
        else
            cout<<sum<<endl;
    }

return 0;
}
