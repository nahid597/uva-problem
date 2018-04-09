
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("11677.txt","r",stdin);
    //freopen("11677o.txt","w",stdout);
    int h1,h2,h,m,m1,m2,t;

    while(1){

        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);

        if(h1 ==0 && h2 ==0 && m1 == 0 && m2 == 0)
            break;

    if(h1 == h2 && m1 > m2)
    {
        h = 23;
        m = 60 - m1 + m2;
        t = h * 60 + m;

    }

     else if(h1 == h2 && m1 < m2)
    {
        m =  m2 - m1;
        t = m;
    }


    else if(h2 > h1 && m2 > m1)
    {
        h = h2 - h1;
        m = m2 - m1;
        t = h * 60 + m;
    }

     else if(h1 > h2 && m1 > m2)
    {
        h = 23 - h1 + h2;
        m = 60 - m1 + m2;
        t = h * 60 + m;
    }

     else if(h2 > h1 && m1 > m2)
    {
        h = h2 - h1 -1;
        m = 60 - m1 + m2;
        t = h * 60 + m;
    }

     else if(h1 > h2 && m2 > m1)
    {
        h = 23 - h1 + h2 ;
        m = 60 - m1+ m2;
        t = h * 60 + m;
    }

     else if(h1 > h2 && m2 == m1)
    {
        h = 23 - h1 + h2;
        t = h * 60 ;
    }

    else if(h1 < h2 && m2 == m1)
    {
        h =  h2 - h1;
        t = h * 60 ;
    }

    printf("%d\n",t);

    }


    return 0;
}
