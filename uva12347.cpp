#include<bits/stdc++.h>
using namespace std;
 int tr[10001];
    long long tmp,i;
     ofstream f1("12347.txt");
void postorder(long long i)
{
    if(tr[i]==0)
        return ;
    if(tr[2*i]!=0)
       postorder(2*i);
    if(tr[2*i+1]!=0)
        postorder(2*i+1);
    cout << tr[i] << endl;
}
int main()
{

    fill(tr,tr+10001,0);
    while(cin >> tmp)
    {
        for(i=1;i<10001;)
        {
        if(tr[i]==0)
        {
            tr[i]=tmp;
            break;
        }
        else if(tr[i] < tmp)
        {
            i=i*2+1;
        }
        else if(tr[i] > tmp)
        {
            i=i*2;
        }
          }
    }
    postorder(1);

    return 0;
}
