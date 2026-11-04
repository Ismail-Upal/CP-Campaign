#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n = 5;
    char c[5][5];

    vector<int> row(5, 0), col(5, 0), diag(2, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> c[i][j];
            if(c[i][j] == 'o'){
                row[i]++, col[j]++; 
                if(i == j) diag[0]++;
                if(i + j == 4) diag[1]++;
            }
        }
    }

    int ans = n - max(diag[0], diag[1]);
    for(int i = 0; i < n; i++){
        ans = min({ans, n - row[i], n - col[i]});
    }

    cout << ans << endl;
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