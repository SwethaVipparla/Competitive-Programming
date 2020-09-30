# include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c, d, e,f;
	cin >> n >> a >> b >> c >>d >> e >> f;
	int a1 = min(a, e) + min(b, f) + min(c, d);
	int a2 = n-(min(a, d+f) + min(b, e+d) + min(c, e+f));
	cout << a2 << " " << a1;
	return 0;
}
