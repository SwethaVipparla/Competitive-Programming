#include<bits/stdc++.h>
using namespace std;

void solve()
{
    double total = 0;
    int lg = 0, count = 1, den = 0;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        else
        {
            if (n > 30)
                lg++;
            if (n % 2 == 0)
            {
                total += n * count;
                den += count;
            }
            count++;
        }
    }
    std::cout << std::fixed;
    total /= den;
    cout << lg << " " << setprecision(2) << total;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin >> t;
    while(t--)
    {
	  solve();
	  cout << "\n";
	}
	return 0;
}
