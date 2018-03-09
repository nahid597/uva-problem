#include<bits/stdc++.h>
using namespace std;
 vector < long long > tr;
    long long tmp,i;
void postorder(long long i)
{
    if(tr[i]==NULL)
        return ;
    if(tr[2*i]!=NULL)
       postorder(2*i);
    if(tr[2*i+1]!=NULL)
        postorder(2*i+1);
    cout << tr[i] << endl;
}
int main()
{
    //fill(tr,tr+,-1);
    while(cin >> tmp)
    {
        i=1;
        tr.push_back(tmp);

        for( ; ;)
        {
        if(tr[i]==NULL)
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

