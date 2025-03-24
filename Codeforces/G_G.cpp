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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<int> b;
      
            int sub = 1;
            for(int i = 1; i < n; i++){
                if(s[i] == s[i - 1]){
                    sub ++;
                }
                else{
                    b.push_back(sub); 
                    sub = 1;
                }
            }
            b.push_back(sub);
            // for(auto i : b) cout << i << " "; 
            int mx = *max_element(b.begin(), b.end());
            if(mx <= 2){
                cout << mx << endl;
                continue;
            }
            
        auto ok = [&](int mid){
            int op = 0;
            for(int i : b){
                if(i > mid) op += (i - 1) / mid;
            }
            return op <= k;
        };  

        int l = 1, r = n, ans = mx, mid;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}