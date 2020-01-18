#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
	return (a / __gcd(a, b) * b);
}

void findNums(ll x)
{

	ll ans;

	for (ll i = 1; i <= sqrt(x); i++) {

		if (x % i == 0 && lcm(i, x / i) == x) {

			ans = i;
		}
	}
	cout << ans << " " << (x / ans);
}

int main()
{
	ll x;
	cin>>x;

	findNums(x);

	return 0;
}

