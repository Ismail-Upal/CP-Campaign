#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        if(i == 0) a[i] = 1;
        else cin >> a[i];
    }
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
        
    auto ok = [&](ll del){
        for(int i = 0, j = del; i < n - del; i++, j++){
            if(a[i] >= b[j]) return 0;
        }
        return 1;
    };

    ll l = 0, r = n, ans = -1, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

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