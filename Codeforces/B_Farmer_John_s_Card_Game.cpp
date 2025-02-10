#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        int ok = 1;
        map<int, int> mp;
        for(int k = 1; k <= n; k++){
            vector<int> v(m);
            for(int i = 0; i < m; i++) cin >> v[i];
            sort(v.begin(), v.end());
            mp[v[0]] = k;
            for(int i = 0; i < m - 1; i++){
                int d = v[i + 1] - v[i];
                if(d != n){
                    ok = 0;
                    break;
                }
            }
        }
        if(!ok) cout << -1 << endl;
        else{
            for(auto i : mp){
                cout << i.second << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}