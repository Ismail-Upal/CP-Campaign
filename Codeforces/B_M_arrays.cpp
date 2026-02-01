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
        int n, m; cin >> n >> m;
        set<int> se;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x; x %= m;
            mp[x]++;
            se.insert(x);
        }
        
        int ans = 0;
        for(auto i : se){
            if(mp[i] == 0) continue;
            if(i == 0) ans++;
            else if(mp[i] >= 2 and 2 * i == m){
                ans++;
                mp[i] = 0;
            }
            else{
                int nd = m - i;
                if(se.find(nd) != se.end()){
                    if(mp[i] > mp[nd]) mp[i] -= (mp[nd] + 1), mp[nd] = 0;
                    else if(mp[i] < mp[nd]) mp[nd] -= (mp[i] + 1), mp[i] = 0;
                    else mp[i] = 0, mp[nd] = 0;
                    ans++;
                }
                ans += mp[i] + mp[nd];
                mp[i] = 0, mp[nd] = 0;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}