#include <bits/stdc++.h>
using namespace std;
 
const int N = 1005;
typedef long long ll;
 
int read()
{
	int x = 0;
	char c = getchar();
	while(!isdigit(c)) 
            c = getchar();
	while(isdigit(c)) 
            x = x * 10 + c - '0', c = getchar();
	return x;
}
 
int n, a[N], m;
ll s;
 
int main()
{
	int t = read();
	while(t--)
        {
		n = read(); 
                m = read();
		s = 0;
		for(int i = 0; i < n; i++) 
                    s += read();
		printf("%lld\n", min(s, 1ll*m));
	}
	
	return 0;
} 
