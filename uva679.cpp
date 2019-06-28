#include<iostream>
#include<math.h>

using namespace std;

int mxnode = 0;

int binarysearch( int n, int item)
{
   //cnt++;

   int l = n * 2;
   int r = l + 1;

   if(l < mxnode && r < mxnode)

   {
        if(item & 1)
       {
          return binarysearch(l , (item / 2) + 1);
       }
       else
       {
          return binarysearch(r, item / 2);
       }

   }

   else
      return n;
}

int main()
{

  int t;


while( cin >> t)
{
     if(t == -1)
        break;

  while(t--)
  {
     int d, l;

     cin >> d >> l;

     mxnode = pow(2 , d);


    int st = binarysearch(1, l);

     cout << st << endl;


}
  }
    return 0;
}
