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
    
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    multiset<int> st;
    for(int i = 0; i < n; i++){
        auto it = st.upper_bound(v[i]);
        if(it != st.end()){
            st.erase(it);
        }
        st.insert(v[i]);
    }
    cout << sz(st) ;
    return 0;
}