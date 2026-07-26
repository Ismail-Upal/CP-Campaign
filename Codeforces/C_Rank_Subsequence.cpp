#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()


void Solve(){
    int n; 
    cin >> n;
    vector<array<int, 4>> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    }

    int ans = 0;
    for(int m = n; m >= 1; m--){
        int j = 1, k;
        for(auto [l, r, u, v] : a){
            k = m - j + 1;
            if(l <= j and j <= r) continue;
            if(u <= k and k <= v) continue;
            j++;
            if(j > m){
                ans = max(ans, m);
                break;
            }
        }
    }
    
    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}