#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,c=0;
    vector< int > vec;
    while(scanf("%d",&n)==1)
        {
            vec.push_back(n);
            c++;
            sort(vec.begin(),vec.end());
            if(c%2==0){
                printf("%d\n",(vec[c/2]+vec[c/2-1])/2);
            }
            else
             printf("%d\n",vec[c/2]);
        }

    return 0;
}
