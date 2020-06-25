#include<bits/stdc++.h>
using namespace std;

string days[] = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday" , "friday"};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1 , s2;
        int l , r , a , b, i;
        cin >> s1 >> s2 >> l >> r;
        for(i = 0 ; i < 7 ; i++)
        {
            if(days[i] == s1) 
                a = i;
            if(days[i] == s2) 
                b = i;
        }
        int diff = (b - a + 1 + 7) % 7 , sol = -1;
        int count = 0, j;
        for(j = 0 ; j < 100 ; j++)
        {
            if(diff >= l && diff <= r) 
            {
                count++;
                sol = diff;
            }
            diff += 7;
        }
        if(count > 1) 
            cout << "many";
        else if(count == 0) 
            cout << "impossible";
        else 
            cout << sol;
        cout << "\n";
    }
    return 0;
}
