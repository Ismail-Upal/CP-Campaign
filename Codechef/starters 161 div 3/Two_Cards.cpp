#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    tc{
        int n; cin >> n;
        vector<int> a(n), b(n);
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)cin>>a[i];
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            cin>>b[i];
            v.push_back({a[i], max(a[i], b[i])});
            mx = max({mx,a[i], b[i]});
        }
        sort(v.rbegin(), v.rend());
        int ans=1;
        char now = 'A';
        for(int i=0; i<n; i++){
            if(v[i].second==mx)ans=1;
            else 
        }
        

        // cout<<mx<<endl;
        // for(auto i : v)cout<<i.first<<' '<<i.second<<endl;
        if(ans)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
 
    return 0;
}