#include<stdio.h>
int main()
    {
        int t,i,n,x[10],tem,j;
        scanf("%d",&n);
        for(t=1;t<=n;t++){
        for(i=0;i<3;i++)
        {
            scanf("%d",&x[i]);
        }
             for(i=0;i<3;i++)
             {
                  for(j=0;j<=i;j++)
                  {
                      if(x[i]>x[j])
                      {
                          tem=x[i];
                          x[i]=x[j];
                          x[j]=tem;
                      }
                  }
             }
            printf("Case %d: %d\n",t,x[1]);


        }
    return 0;


    }
