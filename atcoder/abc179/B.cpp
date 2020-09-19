#include<bits/stdc++.h>

#define ff      first
#define ss      second
#define pb      push_back
#define ll      long long
#define MX      100005
#define inf     1000000
#define mod     1000000007
#define endl    "\n"

#define W(t)            while(t--)
#define all(v)          v.begin(),v.end()
#define ZERO(a)         memset(a,0,sizeof(a))
#define MINUS(a)        memset(a,-1,sizeof(a))
#define rep(i,a,b)      for(i = a; i < b; i++)
#define IOS             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int main()
{
	IOS

	int i,j,t,n;
	pair<int,int> a[200];

	cin>>n;

	rep(i,0,n) cin>>a[i].ff>>a[i].ss;

	rep(i,0,n){
		if(i+2 < n){
			if(a[i].ff==a[i].ss&&a[i+1].ff==a[i+1].ss&&a[i+2].ff==a[i+2].ss)
				{
					cout<<"Yes\n";
					return 0;
				}
		}
	}
	cout<<"No\n";
}