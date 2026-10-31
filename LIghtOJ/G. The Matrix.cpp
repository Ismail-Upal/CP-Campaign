#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<vector<ll>> v(n + 1, vector<ll> (m + 1, 0));
    vector<ll> row(n + 1), col(m + 1);
    ll sum = 0;

    for(int i = 1; i <= n; i++){
        int Xor = 0;
        for(int j = 1; j <= m; j++){
            cin >> v[i][j];
            Xor ^= v[i][j];
        }
        row[i] = Xor; 
        sum += row[i];
    }
    for(int j = 1; j <= m; j++){
        int Xor = 0;
        for(int i = 1; i <= n; i++){
            Xor ^= v[i][j];
        }
        col[j] = Xor;   
        sum += col[j];
    }

    ll ans = sum;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int nw = 0;
            
            for(int k = 0; k < 31; k++){
                int r = ((row[i] >> k) & 1);
                int c = ((col[j] >> k) & 1);

                int old = ((v[i][j] >> k) & 1);
                
                if(r == c){
                    if(r == 1 and old == 0) nw |= (1 << k);
                    if(r == 0 and old == 1) nw |= (1 << k);
                }
            }

            ll nr = row[i] ^ v[i][j] ^ nw;
            ll nc = col[j] ^ v[i][j] ^ nw;

            ll cur = sum - row[i] - col[j] + nr + nc;
            ans = min(cur, ans);   
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