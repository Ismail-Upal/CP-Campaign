#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int r, c, q; 
    cin >> r >> c >> q;
    vector<vector<ll>> v(r + 1, vector<ll> (c + 1));

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> v[i][j];
        }
    }    

    vector<vector<ll>> pref(r + 1, vector<ll> (c + 1));
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + v[i][j]; 
        }
    }

    while(q--){
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        ll sum = pref[r2][c2] - pref[r2][c1 - 1] - pref[r1 - 1][c2] + pref[r1 - 1][c1 - 1];
        cout << sum << endl;
    }
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