#include<stdio.h>
int main(){
int x[105],i,p,y,m,n,a;
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
         a=x[0];
        for(i=1;i<y;i++){
            if(a>x[i])
                a=x[i];
        }
        p=(m-a)*2;
        printf("%d\n",p);
}
return 0;
}
