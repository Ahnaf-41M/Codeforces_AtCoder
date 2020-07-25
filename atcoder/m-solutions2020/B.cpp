#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep1(i,n)       for(int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    IOS
    ll t,n,i,k,a,b,c;
    string s;
    cin>>a>>b>>c;
    cin>>k;

    for(i = 0; i < k; i++)
    {
         if(a<b)
         {
              c*=2;
         }
         else
          b*=2;
    }

    if(a<b && b < c)
     cout<<"Yes\n";
    else
     cout<<"No\n";




    return 0;
}
