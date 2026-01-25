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
    
    int n, m; cin >> n >> m;
    vector<int> w(n + 1);
    for(int i = 1; i <= n; i++) cin >> w[i];
    vector<int> b(m + 1), mp(n + 1);
    deque<int> dq1;
    for(int i = 1; i <= m; i++){
        cin >> b[i];
        if(!mp[b[i]]) dq1.push_back(b[i]);
        mp[b[i]]++;
    }
    
    ll ans = 0;
    for(int i = 1; i <= m; i++){
        deque<int> dq2;
        while(dq1.front() != b[i]){
            ans += w[dq1.front()];
            dq2.push_back(dq1.front());
            dq1.pop_front();
        }

        if(!dq2.empty()){
            dq1.pop_front();
            reverse(dq2.begin(), dq2.end());
            for(auto j : dq2) dq1.push_front(j);
            dq1.push_front(b[i]);
        }
    }
    cout << ans;
    
    return 0;
}