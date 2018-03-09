#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream f1("11946_1.txt");
    int t;
     char str;
   scanf("%d",&t);
    while((str=getchar())!=EOF)
    {
                    if(str=='1')
                    {
                        f1 << "I";
                    }
                     else if(str=='3'){
                        f1<< "E";
                    }
                     else if(str=='4'){
                        f1 << "A";
                    }
                     else if(str=='9'){
                       f1<< "P";
                    }
                     else if(str=='8'){
                        f1<< "B";
                    }
                   else if(str=='0'){
                        f1 << "O";
                    }
                     else if(str=='7'){
                    f1 << "T" ;
                    }
                     else if(str=='6'){
                        f1 << "G";
                    }
                     else if(str=='5'){
                        f1 << "S";
                    }
                   else if(str=='2'){
                        f1 << "Z";
                    }
                    else if(str=='2'){
                        f1 << "S";
                    }
                   else
                        f1 << str;
    }
    return 0;
}
