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
         ll t,n,i;
     
         cin>>t;
     
         while(t--)
         {
              string s;
              cin>>s;
              vector<int> v;
              int cnt=0,ans=0;
              rep(i,s.size())
              {
                   if(s[i]=='1')
                        cnt++;
                   else
                   {
                        if(cnt)
                             v.pb(cnt);
                        cnt = 0;
                   }
              }
              if(cnt)
                   v.pb(cnt);
              sort(v.begin(),v.end());
              for(int i = v.size()-1; i >= 0; i-=2)
              {
                   ans+=v[i];
              }
              cout<<ans<<endl;
         }
     
         return 0;
    }