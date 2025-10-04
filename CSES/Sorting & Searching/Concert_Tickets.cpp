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
    
    int n, m; cin >> n >> m;
    vector<int>b(m);
    multiset<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(int j = 0; j < m; j++) cin >> b[j];
    for(int i = 0; i < m; i++){
        int x = b[i];
        auto up = se.upper_bound(x);
        --up;
        if(*up <= x){
            cout << *up << endl;
            se.erase(up);
            se.insert(-1);
        }
        else cout << -1 << endl;
    }
    
    return 0;
}