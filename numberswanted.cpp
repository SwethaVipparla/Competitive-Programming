#include <iostream>
#include <string>
using namespace std;

int max (string a)
{
    int i;
    int max = 0;
    int f = 0; 
    int l=0;
    int str[256];
    for(i = 0; i < 256; i++)
        str[i]=0;
    while(l < a.length())
    {
        while(str[a.at(l)])
        {
            str[a.at(f)]--;
            f++;
        }
        str[a.at(l)]++;
        l++;
        if (max < l - f )
            max = l - f;
    }
    return max;
}

int main()
{
    int t, n;
    string a, b, ans;
    cin >> t;
    while(t--)
    {
        cin >> n >> a >>b;
        if(max(a) > max(b))
            ans = "AG";
        else
            ans = "AB";
        cout << ans << "\n";
    }
    return 0;
}
