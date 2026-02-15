#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].second;
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v[i].first = v[i].second - x;
        }

        sort(v.begin(), v.end());
        ll ans = v[0].second - v[0].first;
        for(int i = 1; i < n; i++) ans += v[i].second;

        cout << ans << endl;
    }
    
    return 0;
}