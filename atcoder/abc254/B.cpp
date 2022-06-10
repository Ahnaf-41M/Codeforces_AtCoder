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

int n, ar[31][31];
void Solve(int tc)
{
    cin >> n;

    rep(i, 0, n - 1) {
        rep(j, 0, i) {
            if (j == 0 || j == i) ar[i][j] = 1;
            else ar[i][j] = ar[i - 1][j - 1] + ar[i - 1][j];
        }
    }
    rep(i, 0, n - 1) {
        rep(j, 0, i) {
            cout << ar[i][j] << " ";
        }
        cout << "\n";
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