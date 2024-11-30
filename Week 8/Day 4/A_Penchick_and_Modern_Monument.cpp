#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{
    optimize();
 
    tc{
        int n; cin >> n;
        vector<int>v(n);
        map<int,int>mp;
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
            mx = max(mx, mp[v[i]]);
        }
        cout<<n-mx<<endl;
    }
 
    return 0;
}