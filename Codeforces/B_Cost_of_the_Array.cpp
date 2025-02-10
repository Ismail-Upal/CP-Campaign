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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int ans = 0;
        if(n == k){
            int j = 1;
            for(int i = 1; i < n; i += 2){
                if(v[i] != j){
                    ans = j;
                    break;
                }
                j++;
            }
            if(ans == 0) ans = n / 2, ans ++;
        }
        else {
            ans = 2; n -= k - 2;
            for(int i = 1; i < n; i++){
                if(v[i] != 1) ans = 1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}