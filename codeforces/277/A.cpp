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

bool visited[300];
int a[300][300];
int n,m,x,i,j,k,is_zero=0;

void dfs(int g)
{
     visited[g] = true;
     for(int t = 1; t <= n+m; t++)
     {
          if(a[g][t] && !visited[t])
               dfs(t);
     }
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin>>n>>m;

    for(i = 1; i <= n; i++)
    {
        cin>>k;
        is_zero+=k;

        for(j = 0; j < k; j++)
        {
            cin>>x;
            a[i][x+n] = 1;
            a[x+n][i] = 1;
        }
    }
    int cnt=0;
    for(i = 1; i <= n; i++)
    {
         if(!visited[i])
         {
              dfs(i);
              cnt++;
         }

    }
    if(!is_zero)
     cout<<n<<endl;
    else
    cout<<cnt-1<<endl;

    return 0;
}

