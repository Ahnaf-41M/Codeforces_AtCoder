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
#define Max 10000005
ll is_prime[Max+5];

vector<int> v;
void sieve()
{
    ll i,j;
    is_prime[0]=-1,is_prime[1]=1,is_prime[2]=2;

    for(i = 3; i < Max; i++)
    {
        if(is_prime[i] == 0)
        {
            is_prime[i] = i;
            for(j = 2*i; j < Max; j+=i)
            {
                is_prime[j]=i;
            }
        }
    }
    /*v.push_back(2);
    for(i = 3; i <= Max; i+=2)
        if(a[i])
            v.push_back(i);*/
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    sieve();
    ll t,n,i,j,k,l;

    cin>>n;

    ll a[n];

    rep1(i,n)
    {
        cin>>a[i];
    }

    vector<ll> div1,div2;

    for(i = 0; i < n; i++)
    {

        ll x = a[i];
        while(x%2 == 0)
        {
            x/=2;
        }
        if(x != a[i])
        {
            if(x == 1)
            {
                div1.pb(-1);
                div2.pb(-1);
            }
            else
            {
                div1.pb(x);
                div2.pb(2);
            }
        }
        else
        {
            ll m;
            vector<ll> tmp;
            while(x>1)
            {
                m = is_prime[x];
                while(x % m==0)
                {
                    x /= m;
                }
                tmp.pb(m);
            }
            if(tmp.size()<=1)
            {
                div1.pb(-1);
                div2.pb(-1);
            }
            else
            {
                sort(tmp.begin(),tmp.end());
                div1.pb(tmp[0]);
                div2.pb(tmp[1]);
            }
        }

    }
    for(i = 0; i < div1.size(); i++)
    {
        cout<<div1[i]<<" ";
    }
    cout<<endl;
    for(i = 0; i < div2.size(); i++)
    {
        cout<<div2[i]<<" ";
    }

    return 0;
}

