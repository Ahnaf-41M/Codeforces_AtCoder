    #include<bits/stdc++.h>
    using namespace std;
     
     
    #define ll long long
    ll a[100000];
    int main()
    {
        ll i,n,t,k=0,c=0,j,g=0;
        vector<ll> v;
     
     
        cin>>t;
     
        while(t--)
        {
            cin>>n;
            a[1]=0,a[0]=0,a[2]=0;
            for(i = 2; i <= sqrt(n); i++)
            {
                if(n%i==0)
                {
                    if(n/i==i)
                        v.push_back(i);
                    else
                    {
                        v.push_back(i);
                        v.push_back(n/i);
                    }
                }
     
            }
            sort(v.begin(),v.end());
            for(i = 0; i < v.size(); i++)
            {
                if(g==1)break;
                for(j = i+1; j < v.size(); j++)
                {
                    if(g==1)break;
                    for(k = j+1; k < v.size(); k++)
                    {
     
                        if(v[i]*v[j]*v[k]==n&&(v[i]!=v[j]&&v[j]!=v[k]&&v[i]!=v[k]))
                        {
                            a[0]=v[i];
                            a[1]=v[j];
                            a[2]=v[k];
                            g=1;
                            break;
                        }
                    }
                }
            }
            //sort(a,a+3);
            if(a[0]!=0)
            {
                cout<<"YES\n";
                cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            }
            else
                cout<<"NO\n";
                g=0;
                v.clear();
     
        }
    }