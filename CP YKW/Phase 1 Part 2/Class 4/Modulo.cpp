#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e5 + 4;
ll a[N];
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        priority_queue<pair<ll, int>> pq;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            pq.push({a[i], i});
        }
        int q; cin >> q;
        while(q--){
            ll m; cin >> m;
            while(!pq.empty()){
                auto [x, i] = pq.top();
                if(x < m) break;
                pq.pop();
                pq.push({x % m, i});
            }
        }
        while(!pq.empty()){
            auto [x, i] = pq.top();
            pq.pop();
            a[i] = x;
        }
        cout << "Case " << _ << ":" << endl;
        for(int i = 1; i <= n; i++){
            cout << a[i] << (i < n ? ' ' : '\n') ;
        }
    }
    return 0;
}