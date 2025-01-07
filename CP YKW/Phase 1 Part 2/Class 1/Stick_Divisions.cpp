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
    
    int x, n; cin >> x >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        pq.push(x);
    }
    ll cur = 0, ans = 0;
    while(sz(pq) > 1){
        cur += pq.top(); pq.pop();
        cur += pq.top(); pq.pop();
        pq.push(cur);
        ans += cur;
        cur = 0; 
    }
    cout << ans;
    return 0;
}