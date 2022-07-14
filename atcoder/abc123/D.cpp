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
#define  Tuple        tuple<int, int, int, int>
using namespace std;

void Solve(int tc)
{
    int x, y, z, k;
    multiset<int, greater<int>> ans;

    cin >> x >> y >> z >> k;

    vector<int> v1(x), v2(y), v3(z);
    for (int &x : v1) cin >> x;
    for (int &x : v2) cin >> x;
    for (int &x : v3) cin >> x;

    sort(all(v1), greater<int>());
    sort(all(v2), greater<int>());
    sort(all(v3), greater<int>());

    priority_queue<Tuple> Q;
    set<Tuple> has;

    Q.push({v1[0] + v2[0] + v3[0], 0, 0, 0});
    has.insert({v1[0] + v2[0] + v3[0], 0, 0, 0});

    rep(i, 1, k) {
        Tuple cur = Q.top(); Q.pop();
        int sum = get<0>(cur), a = get<1>(cur), b = get<2>(cur), c = get<3>(cur);

        cout << sum << "\n";
        if (a + 1 < x) {
            sum = v1[a + 1] + v2[b] + v3[c];
            cur = {sum, a + 1, b, c};
            if (has.find(cur) == has.end()) {
                Q.push(cur);
                has.insert(cur);
            }
        }

        if (b + 1 < y) {
            sum = v1[a] + v2[b + 1] + v3[c];
            cur = {sum, a, b + 1, c};
            if (has.find(cur) == has.end()) {
                Q.push(cur);
                has.insert(cur);
            }
        }
        if (c + 1 < z) {
            sum = v1[a] + v2[b] + v3[c + 1];
            cur = {sum, a, b, c + 1};
            if (has.find(cur) == has.end()) {
                Q.push(cur);
                has.insert(cur);
            }
        }
    }
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