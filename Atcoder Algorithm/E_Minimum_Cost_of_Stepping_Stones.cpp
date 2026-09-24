#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int n, k; cin >> n >> k;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<ll> dp(n + 1, 0);
    dp[1] = a[1];

    deque<int> dq;
    dq.push_back(1);

    for(int i = 2; i <= n; i++){
        while(dq.front() < i - k) dq.pop_front();

        int f = dq.front();
        dp[i] = dp[f] + a[i];

        while(dq.size() and dp[dq.back()] >= dp[i]){
            dq.pop_back();
        }

        dq.push_back(i);
    }

    cout << dp[n] << endl;
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}
