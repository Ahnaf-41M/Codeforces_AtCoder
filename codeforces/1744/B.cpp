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
    int n, q, ev = 0, sum = 0;
    int odd = 0, even = 0;
    cin >> n >> q;

    int ar[n];
    for (int &x : ar) {
        cin >> x;
        if (x & 1) odd++;
        else even++;
        sum += x;
    }


    while (q--) {
        int a, b;
        cin >> a >> b;
        if (a) {
            sum += odd * b;
            if (b & 1) {
                even += odd;
                odd = 0;
            }
        }
        else {
            sum += even * b;
            if (b & 1) {
                odd += even;
                even = 0;
            }

        }
        cout << sum << "\n";

    }
    // int ans=0;
    // for (int &x : ar) {
    //     if (x & 1) x += odd;
    //     else x += ev;
    // }
    // for (int x : ar) cout << x << " ";
    // cout << ev << "\n";
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