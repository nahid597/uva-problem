#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a,b,c,d,l,p,cak,q,x[102];
    while((scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)==5))
    {
        cak=0;
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        for(int i=0;i<=l;i++){
            x[i]=a*i*i+b*i+c;
            p=x[i];
            q=p%d;
            if(q==0)
                cak++;
        }
        printf("%d\n",cak);
     }
return 0;
}
