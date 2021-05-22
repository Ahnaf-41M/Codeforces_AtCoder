#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
    map<int, vector<int> > adj;
    int n, ans = 0;

    cin >> n;
    rep(i, 1, n) {
        int x; cin >> x;
        adj[x].pb(i);
    }

    for (auto it : adj) {
        //left[i] contains number of elements in the left + 1
        //right[i] contains number of elements in the right + 1
        int sz = it.second.size();
        vector<int> left = it.second,right(sz);
        right[sz - 1] = n - left[sz - 1] + 1; 

        irep(i, sz - 2, 0) right[i] = right[i + 1] + (n - left[i] + 1);

        /*total num of sub-arrays that i'th element contributes =
          (number of elements in the left+1) * (number elements in the right+1)*/
        rep(i, 0, sz - 2) ans += left[i] * right[i + 1];
    }
    cout << ans << endl;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}