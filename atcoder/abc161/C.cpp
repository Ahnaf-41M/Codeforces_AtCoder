    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
         ll n,k;
     
         cin>>n>>k;
     
         if(n%k==0)
              cout<<0<<endl;
         else if(n<k)
         {
              if((n%k)<(k-n))
                   cout<<n<<endl;
              else
                   cout<<abs(n-k)<<endl;
         }
         else
         {
              n = n%k;
              cout<<k-n<<endl;
         }
    }