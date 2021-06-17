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

int ar[2 * MX], n, q;

int BSearch(int k)
{
    int l = 1, r = n, res = -1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        int tot = ar[mid] - mid; // # of elements in the left of ar[mid] from 1 to ar[mid]
        if (tot >= k) r = mid - 1, res = mid;
        else l = mid + 1;
    }
    return (res == -1 ? n : res);
}
void Solve(int tc)
{
    cin >> n >> q;
    rep(i, 1, n) cin >> ar[i];
    while (q--) {
        int k, ind;
        cin >> k;
        ind = BSearch(k);
        int left = ar[ind] - ind;
        if (k > left) cout << ar[ind] + k - left << "\n";
        else cout << ar[ind] - (left - k + 1) << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}