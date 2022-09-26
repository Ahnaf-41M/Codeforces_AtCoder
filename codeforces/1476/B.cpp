#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
using namespace std;

void Solve(int tc)
{
    int n, k, cur = 0, ans = 0;
    cin >> n >> k;

    int ar[n];
    for (int &x : ar) cin >> x;

    cur = ar[0];

    for (int i = 1; i < n; i++) {
        if (k * cur >= 100 * ar[i]) {
            cur += ar[i];
            continue;
        }
        int low = cur, high = 2e15, res;
        while (low <= high) {
            int mid = (low + high) >> 1;
            if (k * mid >= 100 * ar[i]) {
                res = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        ans += (res - cur);
        cur = res + ar[i];
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