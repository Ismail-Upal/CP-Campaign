#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    int cnt = 0, y = v[1];
    for(int i = 1; i <= n; i++){
        if(y == k and y == v[i]) cnt += v[i] - y + 1;
        else if(y < k and k <= v[i]) cnt++;
        else if(y > k and k >= v[i]) cnt++;
        y = v[i];
    }

    cout << cnt;
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