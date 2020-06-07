#include <bits/stdc++.h>
#include <ext/rope>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(min(a, b), min(c, d))
#define max4(a, b, c, d) max(max(a, b), max(c, d))

#define count_one(a) __builtin_popcount(a) // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i) __builtin_parity(i)      //even parity 0 and odd parity 1
#define blz(a) __builtin_clz(a)            //Returns the number of leading zeroes in a number(a)
#define btz(a) __builtin_ctz(a)            //Returns the number of trailing zeroes in a number(a)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

#define pb push_back
#define PI M_PI
#define endl "\n"
#define sc scanf
#define pf printf

#define ll long long
#define ull unsigned long long

#define W(t) while (t--)
#define rep1(i, n) for (int i = 0; i < n; i++)
#define rep2(a, b) for (int i = a; i <= b; i++)
#define repit(it, type) for (it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
using namespace __gnu_cxx;

char s[20][20];
int main()
{
    IOS int i, cnt = 0, n, m, j;

    cin >> n >> m;
    n += 2, m += 2;

    for (i = 3; i <= n; i++)
    {
        for (j = 3; j <= m; j++)
        {
            cin >> s[i][j];
        }
    }
    for (i = 3; i <= n; i++)
    {
        for (j = 3; j <= m; j++)
        {
            if ((s[i][j] == 'P' && s[i][j + 1] == 'W') || (s[i][j] == 'W' && s[i][j + 1] == 'P'))
            {
                s[i][j] = '.', s[i][j + 1] = '.';
                cnt++;
            }
            else if ((s[i][j] == 'P' && s[i][j - 1] == 'W') || (s[i][j] == 'W' && s[i][j - 1] == 'P'))
            {
                s[i][j] = '.', s[i][j - 1] = '.';
                cnt++;
            }
            else if ((s[i][j] == 'P' && s[i - 1][j] == 'W') || (s[i][j] == 'W' && s[i - 1][j] == 'P'))
            {
                s[i][j] = '.', s[i - 1][j] = '.';
                cnt++;
            }
            else if ((s[i][j] == 'P' && s[i + 1][j] == 'W') || (s[i][j] == 'W' && s[i + 1][j] == 'P'))
            {
                s[i][j] = '.';
                s[i + 1][j] = '.';
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}