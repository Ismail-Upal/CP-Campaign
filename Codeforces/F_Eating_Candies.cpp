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
        vector<int> v(n + 1), pref(n + 1), suff(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            pref[i] = pref[i - 1] + v[i];
        }

        for(int i = 1; i <= n; i++){
            if(i == 1){
                suff[i] = pref[n]; continue;
            }
            suff[i] = suff[i - 1] - v[i - 1];
        }
        
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int x = pref[i];
            int l = i + 1, r = n, mid, res = 0;
            while(l <= r){
                mid = l + (r - l) / 2;
                if(suff[mid] == x){
                    res = mid; break;
                }
                else if(suff[mid] < x) r = mid - 1;
                else l = mid + 1;
            }
            if(res){
                int j = n - res + 1;
                ans = max(ans, i + j);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}