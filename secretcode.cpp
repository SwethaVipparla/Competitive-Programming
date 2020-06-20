#include<bits/stdc++.h>
using namespace std;

int decode(string str, int len) 
{ 
    if (len == 0 || len == 1) 
        return 1; 
    if(str[0] == '0') 
        return 0; 
    int count2 = 0;  
    if (str[len - 1] > '0') 
        count2 = decode(str, len - 1); 
    if (str[len - 2] == '1' ||  (str[len - 2] == '2' && str[len - 1] < '7') ) 
        count2 += decode(str, len - 2); 
    return count2; 
} 

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int len, t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        len = s.length();
        int count = decode(s, len);
        if(count % 2) 
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
    return 0;
}
