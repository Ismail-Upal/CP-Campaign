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
        int n, k; cin >> n >> k;
        vector<int> v(n + 1), mp(21), cur(21);
        for(int i = 1; i <= n; i++){
            cin >> v[i]; mp[v[i]] ++;
        }
        int mx = *max_element(mp.begin(), mp.end());
        if(mx == mp[k]){
            cout << 0 << endl; continue;
        }
        int ok = 0;
        cur = mp;
        for(int i = 1; i <= n; i++){
            cur[v[i]]--;
            mx = *max_element(cur.begin(), cur.end());
            if(mx == cur[k]){
                ok = 1; break;
            }
            if(cur[k] == 0) break;
        }
        if(ok) cout << ok << endl;
        else{
            cur = mp;
            for(int i = n; i >= 1; i--){
                cur[v[i]]--;
                mx = *max_element(cur.begin(), cur.end());
                if(mx == cur[k]){
                    ok = 1; break;
                }
                if(cur[k] == 0) break;
            }
            if(ok) cout << ok << endl;
            else cout << 2 << endl;
        }
    }
    
    return 0;
}