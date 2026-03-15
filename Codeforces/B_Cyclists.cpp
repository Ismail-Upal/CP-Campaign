#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, k, p, m; cin >> n >> k >> p >> m;
    vector<ll> v(n + 1);
    for(ll i = 1; i <= n; i++) cin >> v[i];
    if(n == k){
        cout << m / v[p] << endl; return;
    }

    ll ans = 0;
    deque<ll> a, b;
    for(ll i = 1; i <= k; i++) a.push_back(i);
    for(ll i = k + 1; i <= n; i++) b.push_back(i);

    if(p <= k){
        a.clear();
        for(ll i = 1; i <= k; i++){
            if(i != p) a.push_back(i);
        }
        a.push_back(k + 1); 
        b.pop_front();
        b.push_back(p);
        if(m >= v[p]) ans++, m -= v[p];
        else{ cout << 0 << endl; return; }
    }
    else{
        deque<ll> dq;
        for(ll id : a) dq.push_back(v[id]); 
        
        sort(dq.begin(), dq.end());
        m -= dq[0]; dq.pop_front();
        
        for(ll id : b){
            if(id == p) break;
            dq.push_back(v[id]);
            sort(dq.begin(), dq.end());
            m -= dq[0]; dq.pop_front();
        } 
        m -=  v[p]; 
        if(m >= 0) ans++;
        else{
            cout << 0 << endl; return;
        }
    } 
    ll sum = v[p]; 
    deque<int> dq;
    for(ll i = 1; i <= n; i++){
        if(i != p) dq.push_back(v[i]);
    }
    sort(dq.begin(), dq.end());
    for(ll i = 0; i < n - k; i++) sum += dq[i];

    ans += m / sum;
    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}