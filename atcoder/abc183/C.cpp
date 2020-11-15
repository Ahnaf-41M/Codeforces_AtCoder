#include <bits/stdc++.h>
using namespace std;
#define N 10
#define ll long long
ll graph[N][N], n, K;
ll ans;
void travllingSalesmanProblem(ll src)
{
	vector<ll> vertex;
	for (ll i = 1; i <= n; i++)
		if (i != src)
			vertex.push_back(i);
	do
	{
		ll k = src;
		ll cur_wt = 0;
		for (ll i = 0; i < vertex.size(); i++) {
			cur_wt += graph[k][vertex[i]];
			k = vertex[i];
		}
		cur_wt += graph[k][src];
		if (cur_wt == K)
			ans++;
	} while (next_permutation(vertex.begin(), vertex.end()));

}
int main()
{
	cin >> n >> K;

	for (ll i = 1; i <= n; i++)
		for (ll j = 1; j <= n; j++)
			cin >> graph[i][j];
	ll src = 1;
	travllingSalesmanProblem(src);
	
	cout << ans;
}