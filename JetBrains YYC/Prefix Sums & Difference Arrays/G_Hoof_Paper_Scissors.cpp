#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<char> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<int> p(n + 1), h(n + 1), s(n + 1);
    for(int i = 1; i <= n; i++){
        p[i] = p[i - 1];
        h[i] = h[i - 1];
        s[i] = s[i - 1];
        if(v[i] == 'P') p[i]++;
        if(v[i] == 'H') h[i]++;
        if(v[i] == 'S') s[i]++;
    }

    int ans = max({p[n], h[n], s[n]});
    for(int i = 1; i <= n; i++){
        int l = max({p[i - 1], s[i - 1], h[i - 1]});
        int r = max({(p[n] - p[i - 1]), (s[n] - s[i - 1]), (h[n] - h[i - 1])});
        ans = max(ans, l + r);
    }

    cout << ans;
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