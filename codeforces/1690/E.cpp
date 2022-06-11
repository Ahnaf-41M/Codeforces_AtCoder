#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;


void Solve(int tc)
{
    int n, k, ans = 0;

    cin >> n >> k;
    int ar[n];

    for (int &x : ar) {
        cin >> x;
        ans += (x / k);
        x %= k;
    }
    sort(ar, ar + n);

    // for (int x : ar) cout << x << " ";
    int i = 0, j = n - 1;
    while (i < j) {
        while (ar[i] + ar[j] < k && i < j) i++;
        if (i == j) break;
        ans++;
        i++, j--;
    }
    cout << ans << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}