#include<bits/stdc++.h>

using namespace std;

const int n = 8;

int col[100], dia1[100], dia2[100], queen[100], c = 0, rw, cl,st[100][100];

void nqueen(int pos)
{
  //cout << "nahid" << endl;
  if(pos == n+1 )
  {
    //cout << "nahid" << endl;
    c++;
   // cout <<
      for(int i = 1; i <= n; i++)
      {
         st[c][i] = queen[i];
          ///if(queen[i] == cl)
            //cout << queen[i] << " ";
      }

    return;

  }

  for(int i = 1; i <= n; i++)
  {
     if(col[i] || dia1[i+pos] || dia2[n + i - pos])
       continue;

     col[i] = dia1[i + pos] = dia2[n + i-pos] = 1;
     queen[pos] = i;
     nqueen(pos + 1);
     col[i] = dia1[i + pos] = dia2[n + i -pos] = 0;

  }

}

int main()
{

  //freopen("uva750.txt", "r", stdin);
  //freopen("uva750out.txt", "w" , stdout);

  nqueen(1);
  int t, cnt = 0;
  cin >> t;
  while(t--)
  {
     cnt = 0;
     //cout << "nahid" << endl;

     cin >> rw >> cl;

     cout << "SOLN"<<"       "<<"COLUMN"<<endl;
     cout << " #  "<<"    "<<"1 2 3 4 5 6 7 8"<<endl;
     cout << endl ;

     for(int i = 1; i < 95; i++)
       {
         if(st[i][cl] == rw)
         {
            cnt++;
            if(cnt < 10)
            cout << " "<< cnt <<"  " <<"   ";
            else
               cout << cnt <<"  " <<"   ";
            for(int j = 1; j <= n; j++)
            {
                cout << " "<<st[i][j];
            }
             cout << endl;
         }

       }

     if(t > 0)
       cout << endl;

   // cout << "c " << c << endl;
    // c = 0;


  }

   return 0;
}
