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

        auto ok = [&](int make){
            int res = 0;
            for(int i = 0; i < n; i++){
                res += (min(v[i], make) * 50) - (make * 30);
            }
            return res;
        };

        int l = 0, r = v[n - 1];
        int ans = 0;
        while(l <= r){
            int m1 = l + (r - l) / 3, m2 = r - (r - l) / 3;
            
            if(ok(m1) <= ok(m2)){
                ans = ok(m2);
                l = m1 + 1;
            }
            else r = m2 - 1;
        }

        cout << ans << endl;
    }
    
    return 0;
}