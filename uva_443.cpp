#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,i,c ,st;

    while(scanf("%d",&n)==1)
    {
        c = 1;
        i = 2;
        if(n==1)
            printf("The 1st humble number is 1.\n");


        else
        {
           for(; ;)
           {
               if(i %2 == 0 || i % 3 ==0 || i % 5 == 0 || i %7 == 0)
               {
                   c++;
                   st = i;

               }

               i ++;

                if(c == n)
                    break;

           }

           //cout << endl;

           printf("%d\n",st );



        }



    }



    return 0;
}
