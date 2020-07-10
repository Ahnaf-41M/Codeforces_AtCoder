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
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
using namespace __gnu_cxx;

int main()
{
	IOS
	 // freopen("input.txt", "r", stdin);
	 // freopen("output.txt", "w", stdout);
	int t, n;
	string s1, s2, s3;

	cin >> t;

	W(t)
	{
		cin >> s1 >> s2 >> s3;
		string tmp = "";
		map<char, int> mp1, mp2, mp3, vis;

		if (s1.size() > s2.size())
		{
			cout << "NO\n";
			continue;
		}
		int i = 0,j = 0;

		while(i < s2.size())
		{
			if(j!=s1.size() && s2[i]==s1[j])
				j++;
			i++;
		}
		if(j!=s1.size())
		{
			cout<<"NO\n";
			continue;
		}

		for (i = 0; i < s1.size(); i++)
			mp1[s1[i]]++;
		for (i = 0; i < s2.size(); i++)
			mp2[s2[i]]++;
		for (i = 0; i < s3.size(); i++)
			mp1[s3[i]]++;

		bool ok = true;

		for (auto it = mp2.begin(); it != mp2.end(); it++)
		{
			if (mp1[it->first] < it->second)
				ok = false;
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}