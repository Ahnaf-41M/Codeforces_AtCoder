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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i = 0, j;
	bool ok = true;
	string s;

	cin >> s;

	if (s.size() == 1)
	{
		if (s[0]!='n'&& s[0] != 'a' && s[0] != 'e' && s[0] != 'o' && s[0] != 'u' && s[0] != 'i')
			ok = false;
	}
	else
	{
		while (i < s.size())
		{
			if (s[i] == 'n' ||s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
			        s[i] == 'o' || s[i] == 'u')
				i++;
			else if(i==s.size()-1 && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
			         s[i] != 'o' && s[i] != 'u'&&s[i]!='n')
				{
					ok = false;
					break;
				}
			else if (i + 1 < s.size() && s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' &&
			         s[i + 1] != 'o' && s[i + 1] != 'u')
			{
				ok = false;
				break;
			}
			else
				i++;
		}
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
