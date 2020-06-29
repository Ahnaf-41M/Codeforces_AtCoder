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

const int mx = 3e5+10;
set<int> adj[mx],vis;
int n,m,k,phb;

void dfs(int x)
{
     /*just checking if it is possible to create a tree with the nodes which are not prohibited to create an edge*/
    for(int i = 0; ;)
    {
        auto it = vis.upper_bound(i);//next value present in vis set
        i = *it;

        if(it == vis.end()) //if no such value exist then break
            break;


        if(adj[x].count(i)) //check if the value is connected with x or not
            continue;
        if(x==1)
            phb++;
        vis.erase(it); //It means we can create an edge between i and x
        dfs(i);
    }
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin>>n>>m>>k;

    int x,y,deg_1 =n-1,i;

    rep1(i,m)
    {
        cin>>x>>y;

        adj[x].insert(y);
        adj[y].insert(x);

        if(min(x,y)==1)
            deg_1--;
    }
    for(i = 2; i <= n; i++)
        vis.insert(i);

    dfs(1);

    if(vis.size()>0)
        cout<<"impossible\n";
    else if(phb <= k && deg_1>=k)
        cout<<"possible\n";
    else
        cout<<"impossible\n";

    return 0;
}

