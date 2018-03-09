#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n>=2&&n<=20){
        while(n--){
            scanf("%d%d%d",&a,&b,&c);
            if(a+b>c&&a+c>b&&b+c>a){
                printf("OK\n");
            }
            else
                printf("Wrong!!\n");
        }
    }
    return 0;
}










