#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int h,c,s=0,l;
    while(scanf("%d",&h)==1){
            c=1;
            s++;
            l=1;
            if(h==1||h==0)
                c=0;
            if(h<0)
                break;
            else{
                while(1){
                    l=l*2;
                    if(l>=h)
                        break;
                    else
                        c++;
                }
            }
        printf("Case %d: %d\n",s,c);
    }

return 0;
}
