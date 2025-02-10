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
        sort(v.begin(), v.end());

        ll press = 0, can = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            v[i] -= cnt;
            if(v[i] == 0){
                press++; continue;
            }
            ll porbe = 1LL * v[i] * (n - i);
            if(can + porbe < k){
                press += porbe + 1;
                can += porbe;
                cnt += v[i];
            }
            else{
                ll nd = k - can;
                press += nd;
                break;
            }
        }
        cout << press << endl;
    }
    
    return 0;
}