#include<bits/stdc++.h>
#include <ext/rope>

#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))

#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)    __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)       __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)       __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define PI   M_PI
#define endl "\n"
#define sc   scanf
#define pf   printf

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep1(i,n)       for(int i = 0; i < n; i++)
#define rep2(a,b)       for(int i = a; i <= b; i++)
#define rep3(a,b,c)     for(int i = a; i <= b; i+=c)
#define irep(a,b,c)     for(int i = b; i >=a; i-=c)
#define repit(it,type)  for(it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
using namespace __gnu_cxx;

int main()
{
    IOS
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int d,sumTime,i,sum1=0,sum2=0,total;

    cin>>d>>sumTime;
    vector< pair<int,int> > v(d);
    vector<int> ans;

    total = sumTime;
    rep1(i,d)
    {
        cin>>v[i].first>>v[i].second;
        sum1+=v[i].second;
        sum2+=v[i].first;
        total-=v[i].first;
    }
    if(sum1 >= sumTime && sum2<= sumTime)
    {
        cout<<"YES\n";
        int rem=sumTime%d, qt = sumTime/d;
        rep1(i,d)
        {
            if(v[i].second-v[i].first <= total)
            {
                total-= v[i].second-v[i].first;
                ans.pb(v[i].second);
            }
            else
            {
                 ans.pb(v[i].first+total);
                 total=0;
            }
        }
        rep1(i,ans.size())
        {
            cout<<ans[i]<<" ";
        }
    }
    else
        cout<<"NO\n";

    return 0;
}

