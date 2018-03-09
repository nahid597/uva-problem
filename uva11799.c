#include<stdio.h>
int main(){
int x[10000],i,n,y,m,c=0;
scanf("%d",&n);
while(n--){
        scanf("%d",&y);
        for(i=0;i<y;i++){
            scanf("%d",&x[i]);
        }
       m=x[0];
        for(i=1;i<y;i++){
            if(m<x[i])
                m=x[i];
        }
            c++;
        printf("Case %d: %d\n",c,m);
}
return 0;
}

