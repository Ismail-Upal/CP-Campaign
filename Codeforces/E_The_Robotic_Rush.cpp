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
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];
        sort(b.begin(), b.end());
        string s; cin >> s;

        vector<ll> opL(k), opR(k);
        ll L = 0, R = 0, j = 0;
        for(ll i = 0; i < k; i++){
            if(s[i] == 'L') j--;
            else j++;
            if(j < 0) L = max(L, abs(j));
            else R = max(R, j);
            opL[i] = L;
            opR[i] = R;
        }
        
        map<ll, ll> ans;
        for(ll i = 0; i < n; i++){
            ll lo = -1, hi = -1;
            
            auto it = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            if(it > 0) lo = b[it - 1];
            it = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            if(it < m) hi = b[it];

            ll left = 1e9, right = 1e9;
            if(lo != -1){
                lo = a[i] - lo;
                it = lower_bound(opL.begin(), opL.end(), lo) - opL.begin();
                if(it < k and opL[it] == lo){
                    left = it + 1;
                }
            }
            if(hi != -1){
                hi = hi - a[i];
                it = lower_bound(opR.begin(), opR.end(), hi) - opR.begin();
                if(it < k and opR[it] == hi){
                    right = it + 1;
                }
            }
            ans[min(left, right)]++;
        }

        for(int i = 1; i <= k; i++){
            ans[i] += ans[i - 1];
        }
        for(int i = 1; i <= k; i++){
            cout << n - ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}