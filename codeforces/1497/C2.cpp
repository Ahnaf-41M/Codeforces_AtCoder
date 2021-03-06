#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

void Solve()
{
    int n, k;
    cin >> n >> k;
    // k--;
    while (k > 3) {
        cout << 1 << " ";
        k--, n--;
    }
    if (n == 4) {
        cout << "1 1 2" << endl;
        return;
    }
    if (n & 1) {
        int x = (int)n / 2;
        cout << 1 << " " << x << " " << x << endl;
    }
    else {
        if (ceil(log2(n)) == floor(log2(n))) {
            vector<int> ans;
            n /= 2;
            cout << n << " ";
            n /= 2;
            cout << n << " " << n << endl;
        }
        else if ((n / 2) % 2 == 0) {
            n /= 2;
            cout << n << " ";
            n /= 2;
            cout << n << " " << n << endl;
        }
        else {
            int x = (n - 2) / 2;
            cout << 2 << " " << x << " " << x << endl;
        }
    }
    return;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--)
        Solve();

    return 0;
}