#include <bits/stdc++.h>
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
    int n;
    cin >> n;

    int ar[n];
    for (int &x : ar) cin >> x;

    int cur = 0, ans = n;
    for (int i = 0; i < n; i++) {
        cur += ar[i];
        int j = i + 1, tmp = 0, k = i + 1, r = i + 1;
        while (j < n) {
            tmp += ar[j];
            if (tmp > cur) break;
            if (tmp == cur) {
                tmp = 0;
                r = max(r, j - k + 1);
                k = j + 1;
            }
            j++;
        }
        if (!tmp) ans = min(ans, r);
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