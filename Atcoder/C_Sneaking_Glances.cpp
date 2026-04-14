#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

int rec(int i, int n, double x, vector<double> &v){
    if(i == n) return 0;

    int ans = 0;
    if(x < 0){
        int cnt = 0;
        if(x + v[i] >= 0) cnt = 1;
        ans = max(rec(i + 1, n, x + v[i], v) + cnt, rec(i + 1, n, x - v[i], v));
    }
    else if(x > 0){
        int cnt = 0;
        if(x - v[i] <= 0) cnt = 1;
        ans = max(rec(i + 1, n, x - v[i], v) + cnt, rec(i + 1, n, x + v[i], v));
    }
    else{
        ans = max(rec(i + 1, n, x + v[i], v), rec(i + 1, n, x - v[i], v));
    }
    return ans;
}

void Solve(){
    int n; cin >> n;
    vector<double> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    cout << rec(0, n, 0.5, v);
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