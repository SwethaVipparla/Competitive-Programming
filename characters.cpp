#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int c = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, i, j;
        for(i = 0; i < s.length(); i++)
        {
            if(i + 4 <= s.length())
            {
                for(j = i; j < i + 4; j++)
                {
                    if(s[j] == 'c')
                        c1 += 1;
                    else if(s[j] == 'h')
                        c2 += 1;
                    else if(s[j] == 'e')
                        c3 += 1;
                    else if(s[j] == 'f')
                        c4 += 1;
                }
            }
            if(c1 == 1 && c2 == 1 && c3 == 1 && c4 == 1)
                c++;
            c1 = 0;
            c2 = 0;
            c3 = 0;
            c4 = 0;
        }
        if(c!= 0)
            cout << "lovely" << " " << c << "\n";
        else
            cout << "normal" << "\n";
    }
}
