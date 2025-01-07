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
 
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    auto cmp = [](pair<int,int>a, pair<int,int>b){
        return a.second < b.second;
    };
    sort(v.begin(), v.end(), cmp);
    
    ll ans = 0, prev = 0;
    for(int i = 0; i < n; i++){
        if(v[i].first >= prev){
            ans ++;
            prev = v[i].second;
        }
    }
    cout << ans ;
    return 0;
}