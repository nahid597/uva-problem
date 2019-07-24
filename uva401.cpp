#include<iostream>

using namespace std;

char mirror(char ch)
{
   if(ch == 'A')
     return 'A';

   if(ch == 'E')
     return '3';

    if(ch == 'H')
     return 'H';

     if(ch == 'I')
     return 'I';

     if(ch == 'J')
     return 'L';

     if(ch == 'L')
     return 'J';

     if(ch == 'M')
     return 'M';

     if(ch == 'O' || ch == '0')
     return 'O';

     if(ch == 'S')
     return '2';

     if(ch == 'T')
     return 'T';

     if(ch == 'U')
     return 'U';

     if(ch == 'V')
     return 'V';

     if(ch == 'W')
     return 'W';

     if(ch == 'X')
     return 'X';

     if(ch == 'Y')
     return 'Y';

     if(ch == 'Z')
     return '5';

     if(ch == '1')
     return '1';

     if(ch == '2')
     return 'S';

     if(ch == '3')
     return 'E';

     if(ch == '5')
     return 'Z';

     if(ch == '8')
     return '8';

   else
     return 'a';

}

int main()
{
   string s;

   while(cin >> s)
   {
      string m = "", p = "", mp = "";

      int sz = s.size();

      for(int i = 0; i < sz; i++)
      {
         char c = mirror(s[i]);

         m += c;
      }

      for(int i = m.size() -1; i >= 0; i--)
      {
         mp += m[i];
      }

      int mpc = 0, mc = 0;

      if(mp == m)
      {
         mpc = 1;
      }

      if(mp == s)
      {
         mc = 1;
      }

      for(int i = s.size() -1; i >= 0; i--)
      {
         p += s[i];
      }

      int pc = 0;

      if(p == s)
      {
         pc = 1;
      }

      cout << s << " -- ";

      if(!pc && !mc)
      {
         cout << "is not a palindrome."<< endl;

         cout << endl;
      }

     else if(pc && !mc)
      {
         cout << "is a regular palindrome."<< endl;

         cout << endl;
      }

     else if(!pc && mc)
      {
         cout << "is a mirrored string."<< endl;

         cout << endl;
      }

    else if(pc && mc)
      {
         cout << "is a mirrored palindrome."<< endl;

         cout << endl;
      }



   }

   return 0;

}
