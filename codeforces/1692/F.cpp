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
    int n;
    map<int, int> mp;

    cin >> n;
    int ar[n];

    for (int &x : ar) {
        cin >> x;

        int tmp = x % 10;
        mp[tmp]++;
    }

    // for (auto it : mp) {
    //     cout << it.ff << " " << it.ss << "\n";
    // }
    rep(i, 0, 9) {
        rep(j, 0, 9) {
            rep(k, 0, 9) {
                int sum = i + j + k;
                sum %= 10;
                if (i == j && j == k) {
                    // cout << i << " " << j << " " << k << " " << sum << "\n";

                    if (mp[i] >= 3 && sum == 3) {
                        cout << "YES\n";
                        return;
                    }
                }
                else if ((i == j && mp[i] >= 2 && mp[k] >= 1 && sum == 3)
                         || (j == k && mp[j] >= 2 && mp[i] >= 1 && sum == 3)
                         || (i == k && mp[i] >= 2 && mp[j] >= 1 && sum == 3)) {
                    // cout << i << " " << j << " " << k << " " << sum << "\n";
                    cout << "YES\n";
                    return;
                }
                else if (i != j && i != k && j != k && mp[i] >= 1 && mp[j] >= 1 && mp[k] >= 1 && sum == 3) {
                    // cout << i << " " << j << " " << k << " " << sum << "\n";
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";

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