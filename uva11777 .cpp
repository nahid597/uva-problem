#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int t,i,j,tem,y,p,sum,mark,c=0;
char x[10];
scanf("%d",&t);
while(t--){
        c++;
        y=0;
        sum=0;
        mark=0;
    for(i=0;i<7;i++){
    scanf("%d",&x[i]);
    }
    for(i=4;i<=6;i++){
        for(j=4;j<=6;j++){
            if(x[j]<x[i]){
                tem=x[i];
                x[i]=x[j];
                x[j]=tem;
            }
        }
    }
    for(i=4;i<6;i++){
        y+=x[i];
    }
    p=y/2;
    for(i=0;i<=3;i++){
     sum+=x[i];
    }
    mark=sum+p;
    if(mark>=90)
        printf("Case %d: A\n",c);
    else if(mark>=80 && mark<90)
        printf("Case %d: B\n",c);
    else if(mark>=70 && mark<80)
        printf("Case %d: C\n",c);
    else if(mark>=60 && mark<70)
        printf("Case %d: D\n",c);
        else
            printf("Case %d: F\n",c);

}
return 0;
}
