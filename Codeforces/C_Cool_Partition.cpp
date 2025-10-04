#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        map<int, int> mp;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = 1;
        int ok = 0, next_ok;
        set<int> se; se.insert(v[1]); mp[v[1]]--;
        set<int> se_next;
        if(mp[v[1]]) ok = 1;
        int i = 2, j;

        while(i <= n){
            // cout << i << " " << ans << endl;
            // for(auto i : se) cout << i << ' ';
            // cout << endl;
            while(!se.empty() and i <= n){
                if(se.find(v[i]) != se.end()){
                    se.erase(v[i]);
                }
                se_next.insert(v[i]);
                i++;
            }
            // for(auto i : se) cout << i << ' ';
            // cout << endl;

            if(se.empty()) ans++;
            if(i > n) break;
            
            se = se_next;
            se_next.clear();
        }

        cout << ans << endl;
    }
    
    return 0;
}