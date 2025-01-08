#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n; cin >> n;
        map<int,int>mp;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            mp[x] = max(mp[x], i);
        }
        ll ans = 0;
        for(auto i : mp){
            ans += i.second;
        }
        cout << ans << endl;
    }
    
    return 0;
}