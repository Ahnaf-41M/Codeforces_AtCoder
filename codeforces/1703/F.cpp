#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define  int          long long
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
#define  IOS          ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
    tree<T, null_type, less_equal<T>, //less_equal for multiset
    rb_tree_tag, tree_order_statistics_node_update>;

int mod = 1e9 + 7;

void Solve(int tc)
{
    int n, ans = 0;
    ordered_set<int> s;
    cin >> n;

    int ar[n];
    for (int &x : ar) cin >> x;

    irep(i, n - 1, 0) {
        if (i + 1 > ar[i]) {
            int cur = s.size() - s.order_of_key(i + 2);
            ans += cur;
            s.insert(ar[i]);
        }
    }
    cout << ans << "\n";
}
signed main()
{
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif
    IOS

    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

}