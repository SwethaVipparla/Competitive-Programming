/*
One day, n people (n is an even number) met on a plaza and made two round dances, each round dance consists of exactly n2 people. Your task is to find the number of ways n people can make two round dances if each round dance consists of exactly n2 people. Each person should belong to exactly one of these two round dances.

Round dance is a dance circle consisting of 1 or more people. Two round dances are indistinguishable (equal) if one can be transformed to another by choosing the first participant. For example, round dances [1,3,4,2], [4,2,1,3] and [2,1,3,4] are indistinguishable.

For example, if n=2 then the number of ways is 1: one round dance consists of the first person and the second one of the second person.

For example, if n=4 then the number of ways is 3. Possible options:

one round dance — [1,2], another — [3,4];
one round dance — [2,4], another — [3,1];
one round dance — [4,1], another — [3,2].
Your task is to find the number of ways n people can make two round dances if each round dance consists of exactly n2 people
*/

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
	ll n, ans = 1;
	cin >> n;
	for(ll i = 1;i <= n;i++)
		ans *= i;
    ll x = n / 2;
    ll y = n;
    ans = ans / x / y;
    cout << ans << endl;
	return 0;
}
