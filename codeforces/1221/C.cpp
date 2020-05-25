    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t,n,c,m,x,sum;
        cin>>t;
        while(t--)
        {
            cin>>c>>m>>x;
            sum=(c+m+x)/3;
            if(sum>min(c,m))
                cout<<min(c,m)<<endl;
            else
                cout<<sum<<endl;
        }
    }