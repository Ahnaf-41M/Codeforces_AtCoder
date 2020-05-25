    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long
     
     
    int main()
    {
         ll i,j,q,t,n;
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
         cin>>n;
     
         ll x[n+1];
         for(i = 0; i < n; i++)
              cin>>x[i];
     
         sort(x,x+n);
     
         cin>>q;
         ll m[q+1];
         for(i = 0; i < q; i++)
         {
              cin>>m[i];
              //a[i]=b_search(m[i],x,n);
         }
         for(i = 0; i < q; i++)
         {
              cout<<upper_bound(x,x+n,m[i])-x<<endl;
         }
    }