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
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        auto ok = [&](int m){
            ll OR = 0, prev = -1;
            unordered_map<int, int> mp;
            for(int i = 1, j = 1; j <= n; ){
                for(int k = 0; k <= 30; k++){
                    if((v[j] >> k) & 1){
                        mp[k]++;
                        OR |= (1 << k);
                    }
                } 

                if(j - i + 1 < m) j++;
                else if(j - i + 1 == m){
                    if(prev != -1 and OR != prev) return false;
                    prev = OR;

                    for(int k = 0; k <= 30; k++){
                        if((v[i] >> k) & 1){
                            mp[k]--;
                            if(!mp[k]) OR &= (~(1 << k));
                        }
                    }

                    i++; j++;
                }
            }
            return true;
        };

        int l = 1, r = n, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){ 
                ans = m; 
                r = m - 1;
            }
            else l = m + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}