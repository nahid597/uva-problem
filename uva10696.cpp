#include<iostream>
#include<cstdio>
using namespace std;
int f91(int n);
int main(){
    int n,sum;
    while(cin>>n&&n!=0){
     sum=f91(n);
     cout<<"f91("<<n<<") = "<<sum<<endl;
    }
return 0;
}
int f91(int n){
if(n<=100)
    f91(f91(n+11));
if(n>=101)
    return n-10;

}
