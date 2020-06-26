#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--) 
   {
       string s;
       int a, b, i;
       int pa = 0, pb = 0;
       cin >> s;
       cin >> a >> b;
       for(i = 0; i < s.size(); i++) 
       {
            if(s[i] == 'A') 
                pa = i;
            else if(s[i] == 'B') 
                pb = i;
       }
       int flag = 0;
       while(1) 
       {
           pa += a;
           pb -= b;
           if(pa == pb) 
           {
               flag = 1;
               break;
           }
           else if(pa >= s.size() || pb < 0) 
           {
               flag = 0;
               break;
           }
       }
       if(flag == 1) 
            cout << "unsafe\n";
       else 
            cout << "safe\n";
   }
   return 0;
}
