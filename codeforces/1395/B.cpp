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
vector<pair<int,int> > vp;
bool vis[200][200];
int n,m;
bool is_valid(int x,int y)
{
    if(x < 1||x>n||y<1||y>m)
        return false;
    if(vis[x][y])
        return false;
    return true;
}
/*void call(int x,int y)
{
     vp.pb({x,y});
     vis[x][y] = true;

    if(is_valid(x+1,y))
    {
        call(x+1,y);
    }
    if(is_valid(x,y+1))
    {
        call(x,y+1);
    }
    if(is_valid(x-1,y))
    {
        call(x-1,y);
    }
    if(is_valid(x,y-1))
    {
        call(x,y-1);
    }
}*/
int main()
{
    IOS
    int t,a,b;


    cin>>n>>m>>a>>b;
    //int i,j;

    vp.pb({a,b});
    vis[a][b] = true;
    pair<int,int> p,p2;
    p2.first = a;
    p2.second = b;
    while(true)
    {
        p = p2;
        for(int i = 1; i <= n; i++)
        {
            if(!vis[i][p.second])
            {
                p2 = {i,p.second};
                vp.pb({i,p.second});
                vis[i][p.second] = true;
            }

        }
        if(p==p2)
        {
            for(int i = 1; i <= m; i++)
            {
                if(!vis[p.first][i])
                {
                    p2 = {p.first,i};
                    vp.pb({p.first,i});
                    vis[p.first][i] = true;
                }

            }
        }
        if(vp.size() == n*m)
            break;

    }
    for(int i = 0; i < vp.size(); i++)
        cout<<vp[i].first<<" "<<vp[i].second<<endl;


    return 0;
}
