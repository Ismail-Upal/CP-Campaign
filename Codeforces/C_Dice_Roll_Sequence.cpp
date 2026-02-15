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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        map<int, int> mp;
        mp[1] = 6; mp[6] = 1;
        mp[2] = 5, mp[5] = 2;
        mp[3] = 4, mp[4] = 3;

        int ans = 0;

        for(int i = 1; i < n; i++){
            if(mp[v[i]] != v[i - 1] and v[i] != v[i - 1]) continue;
            // cout << i << endl;
            set<int> se;
            for(int i = 1; i <= 6; i++) se.insert(i);

            if(se.find(mp[v[i - 1]]) != se.end()){
                se.erase(se.find(mp[v[i - 1]]));
            }
            if(i + 1 < n){
                if(se.find(mp[v[i + 1]]) != se.end()){
                    se.erase(se.find(mp[v[i + 1]]));
                }
            }
            if(se.find(v[i - 1]) != se.end()){
                se.erase(se.find(v[i - 1]));
            }
            if(i + 1 < n){
                if(se.find(v[i + 1]) != se.end()){
                    se.erase(se.find(v[i + 1]));
                }
            }
            v[i] = *se.begin();

            ans++;
        }
        // for(int i : v) cout << i << " ";
        cout << ans << endl;
    }
    
    return 0;
}