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
        vector<int> v(n + 2), pref(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i - 1] + v[i];
        }
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int x = pref[j - 1] + v[i];
                int lo = lower_bound(pref.begin() + 1, pref.end(), x) - pref.begin();
                int up = upper_bound(pref.begin() + 1, pref.end(), x) - pref.begin();
                
                if(lo != up and j + 1 <= lo){
                    // cout << v[i] << " " << x << " " << lo << " " << up << endl;
                    ans++; break;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}