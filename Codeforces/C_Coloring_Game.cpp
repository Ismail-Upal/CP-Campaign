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
        sort(v.begin(), v.end());
        ll res = 0;
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                int s = v[i] + v[j];
                int l = j + 1, r = n - 1, ans = -1, x = s - 1;
                while(l <= r){
                    int m = l + (r - l) / 2;
                    if(v[m] <= x){
                        ans = m; l = m + 1;
                    }
                    else r = m - 1;
                }
                if(ans == -1) continue;
                int hi = ans;
                l = j + 1, r = ans, x = v[n - 1];
                ans = -1;
                while(l <= r){
                    int m = l + (r - l) / 2;
                    if(s + v[m] > x){
                        ans = m; r = m - 1;
                    }
                    else l = m + 1;
                }
                if(ans == -1) continue;
                res += hi - ans + 1;
                // cout << i << " " << j << ' ' << ans << ' ' << hi << endl;
            }
        }

        cout << res << endl;
    }
    
    return 0;
}