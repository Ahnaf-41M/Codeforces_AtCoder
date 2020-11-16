#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  ll   long long
#define  endl "\n"
#define  MX   200005

#define  W(t)            while(t--)
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(ll i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

ll a[MX], updt[MX];
int main()
{
	ll n, cnt = 0, S, T, P, W, mx_time = INT_MIN, mn_time = INT_MAX;

	cin >> n >> W;

	W(n)
	{
		cin >> S >> T >> P;
		updt[S] += P;
		updt[T] -= P;
		mx_time = max(max(S, T), mx_time);
		mn_time = min(min(S, T), mn_time);
	}
	rep(i, mn_time, mx_time) {
		cnt += updt[i];
		a[i] += cnt;
	}
	rep(i, mn_time, mx_time) {
		if (a[i] > W) {
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes";

	return 0;
}