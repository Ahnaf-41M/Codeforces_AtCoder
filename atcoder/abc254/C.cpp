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

bool done[2 * MX];
void Solve(int tc)
{
    int n, k;
    cin >> n >> k;

    int ar[n + 1];
    ar[0] = 0;
    rep(i, 1, n) cin >> ar[i];

    int i = 1;
    while (i <= n - k) {
        int j = i;
        if (done[j]) {
            i++;
            continue;
        }
        vector<int> tmp;

        while (j <= n) {
            done[j] = 1;
            tmp.pb(ar[j]);
            j += k;
        }
        sort(all(tmp), greater<int>());
        j = i;
        while (j <= n) {
            ar[j] = tmp.back();
            tmp.pop_back(), j += k;
        }

        i++;
    }
    if (is_sorted(ar, ar + n + 1)) cout << "Yes\n";
    else cout << "No\n";

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}