#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    char g[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int ok = 1;
        for(int j = 0; j < m; j++){
            if(g[i][j] == 'o') ok = 0;
        }

        if(ok){
            cout << "Faucet " << i + 1 ;
            return;
        }
    }

    for(int j = 0; j < m; j++){
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(g[i][j] == 'o') ok = 0;
        }

        if(ok){
            cout << "Drain " << j + 1 ;
            return;
        }
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