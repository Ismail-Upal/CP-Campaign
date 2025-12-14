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
        int n, m; cin >> n >> m;
        vector<ll> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(b.begin(), b.end());

        ll prev = -1e9;
        for(int i = 0; i < n; i++){
            int l = 0, r = m - 1, ans = -1;
            while(l <= r){
                ll mid = l + (r - l) / 2;
                ll x = b[mid] - a[i];
                if(prev <= x){
                    ans = mid;
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            if(ans != -1){
                ll x = b[ans] - a[i];
                if(prev == a[i]) a[i] = a[i];
                else if(prev > a[i]) a[i] = x;
                else if(prev < a[i] and x <= a[i]) a[i] = x;
            }
            prev = a[i];
        }

        int ok = 1;
        for(int i = 1; i < n; i++){
            if(a[i] < a[i - 1]) ok = 0; 
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
        // for(auto i : a) cout << i <<  " "; 
    }
    
    return 0;
}