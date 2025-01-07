#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    auto ok = [&](double t){
        for(int i = 0; i < n; i++){
            double x1 = 1.0 * v[i].second * t;
            double dis = abs(v[i].first - 0);
            if(x1 < dis) return false;
        }
        return true;
    };

    double l = 0, r = 1e9, mid, ans;
    while(r - l > 1e-7){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid;
        }
        else l = mid;
    }
    cout << ans ;
    return 0;  
}

