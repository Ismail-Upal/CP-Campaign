#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    multiset<ll> st;
    ll ans = 0, mx = 0, mn = 0;
    for(int i = 0, j = 0; i < n; i++){
        while(j < n){
            st.insert(v[j]);
            mx = *st.rbegin(), mn = *st.begin();
            if(mx - mn > k){
                st.erase(st.find(v[j]));
                break;
            }
            j++;
        }
        ans += j - i;
        st.erase(st.find(v[i]));
    }
    cout << ans ;
    return 0;
}