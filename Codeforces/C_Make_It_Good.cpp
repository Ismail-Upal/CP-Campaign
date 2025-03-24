#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        auto ok = [&](int m){
            vector<int> tmp;
            for(int i = m, j = n - 1; i <= j; ){
                if(v[i] <= v[j]){
                    tmp.push_back(v[i]); i++;
                }
                else{
                    tmp.push_back(v[j]); j--;
                }
            }
            return is_sorted(tmp.begin(), tmp.end());
        };
        int l = 0, r = n - 1, ans = - 1, mid; 
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                r = mid - 1;
                ans = mid;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}