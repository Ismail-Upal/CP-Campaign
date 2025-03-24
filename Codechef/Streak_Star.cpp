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
        int n, x; cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int ans = 1, len = 1;
        for(int i = 1; i < n; i++){
            if(v[i] >= v[i - 1]){
                len++;
            }
            else{
                len = 1;
            }
            ans = max(ans, len);
        }
        int ok = 0;
        for(int i = 0; i < n; i++){
            if(v[i] >= v[i - 1]) len++;
            else if(!ok){
                if(v[i] * x >= v[i - 1] or v[i] >= v[i - 1] * x){
                    len++;
                    ok = 1;
                }
                else{
                    len = 1;
                    ok = 0;
                }
            }
            else{
                len = 1;
                ok = 0;
            }
            ans = max(ans, len);
        }
        cout << max(len, ans) << endl;
    }
    
    return 0;
}