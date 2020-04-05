#include<bits/stdc++.h>
 
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define ll long long
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
     IOS
     int n,m,i,cnt=0,res=0;
     double ans,mmd;
 
     cin>>n>>m;
     int a[n];
     mmd = (1.0)/(4.0*m);
     for(i = 0; i < n; i++)
     {
          cin>>a[i];
          res+=a[i];
     }
     for(i = 0; i < n; i++)
     {
          ans = (a[i]*1.0)/(res*1.0);
 
          if(ans<mmd)
               cnt=cnt;
          else
               cnt++;
     }
     if(cnt>=m)
          cout<<"Yes\n";
     else
          cout<<"No\n";
 
 
     return 0;
}