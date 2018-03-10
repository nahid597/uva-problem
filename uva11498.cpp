#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int k,n,m,x,y;
    while(1){
         scanf("%d",&k);
             if(k==0)
                break;
             scanf("%d%d",&x,&y);
     while(k--){
        scanf("%d%d",&n,&m);
        if(n==x || m==y)
            printf("divisa\n");
        else if(n>x && m>y)
            printf("NE\n");
        else if(n<x && m>y)
            printf("NO\n");
               else if(n<x && m<y)
            printf("SO\n");
               else if(n>x && m<y)
            printf("SE\n");

     }

    }

return 0;
}
