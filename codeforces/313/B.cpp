    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long
     
    void presum(ll sum[],string s,ll h)
    {
        ll i;
        for(i = 1; i < h; i++)
        {
            if(s[i]==s[i-1])
            {
                sum[i+1] = sum[i]+1;
            }
     
            else
                sum[i+1]=sum[i];
     
        }
        //sum[h-1]= sum[h-2]+1;
    }
     
    int main()
    {
        ll n,i;
        string s;
        cin>>s;
        cin>>n;
     
        ll r[n],l[n];
        ll h ;
        h = s.size();
        ll sum[h];
        memset(sum,0,sizeof(sum));
     
        for(i = 0; i < n; i++)
        {
            cin>>l[i]>>r[i];
        }
        presum(sum,s,h);
     
        //cout<<sum[5]<<endl;
        for(i = 0; i < n; i++)
        {
            cout<<sum[r[i]]-sum[l[i]]<<endl;
        }
     
    }