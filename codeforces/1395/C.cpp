#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    IOS
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m, i, j,tmp,k;
    vector<int> c;

    cin >> n >> m;

    int a[n], b[m];

    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    bool found = true;
    rep(i, 512) 
    {
        found = true;
        rep(j, n) 
        {
            rep(k, m) 
            {
                tmp = (a[j]&b[k]) | i;

                if(tmp <= i)
                    break;
            }
            if(k == m){
                found = false;
                break;
            }
        }
        if(found)
            break;

    }

    cout << i;

    return 0;
}