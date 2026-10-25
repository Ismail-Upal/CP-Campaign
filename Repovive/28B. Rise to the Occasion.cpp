#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    int ans1 = 0;
    for(int i : v){
        if(ans1 <= i) ans1 += x;
        else ans1 -= y;
    }

    int ans2 = 0;
    sort(v.rbegin(), v.rend());
    for(int i : v){
        if(ans2 <= i) ans2 += x;
        else ans2 -= y;
    }

    cout << max(ans1, ans2);
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