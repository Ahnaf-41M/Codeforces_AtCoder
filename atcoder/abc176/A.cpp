#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)        for(int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
     IOS
     ll n,i,k,x;
     string s;
     cin>>n>>k>>x;
     if(n%k)
          k = n/k +1;
     else
          k = n/k;
     cout<<(k*x);


     return 0;
}
