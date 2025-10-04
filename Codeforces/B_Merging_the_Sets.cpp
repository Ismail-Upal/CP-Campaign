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
        int n, m; cin >> n >> m;
        vector<vector<int>> v(n);
        set<int> se;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int k; cin >> k;
            vector<int> a(k);
            for(int j = 0; j < k; j++){
                int x; cin >> x; a[j] = x;
                se.insert(x);
                mp[x]++;
            }
            v[i] = a;
        }
        if(sz(se) == m){
            int ans = 1;
            for(int i = 0; i < n; i++){
                int ok = 1;
                for(int j : v[i]){
                    if(mp[j] - 1 == 0) ok = 0; 
                }
                if(ok) ans++;
            }
            if(ans >= 3) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}