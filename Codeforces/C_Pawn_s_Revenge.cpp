#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n; cin >> n;
    int ok = 1;
    char a[n + 4][n + 4];
    pair<int, int> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 'K') k = {i, j};
        }
    }
    set<pair<int, int>> se;
    se.insert(k); se.insert({k.first, k.second + 1});
    se.insert({k.first + 1, k.second + 1});
    se.insert({k.first + 1, k.second});
    se.insert({k.first + 1, k.second - 1});
    se.insert({k.first, k.second - 1});
    se.insert({k.first - 1, k.second - 1});
    se.insert({k.first - 1, k.second});
    se.insert({k.first - 1, k.second + 1});

    for(int i = 1; i <= n; i++){
        if(se.find({n - 1, i}) != se.end()) continue;
        if(a[n][i] == '*') ok = 0;
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= n; j++){
            if(se.find({i, j}) != se.end()) continue; 
            if(j > 1 and j < n and a[i][j] == '*' and a[i + 1][j - 1] == '*' and a[i + 1][j + 1] == '*') ok = 0;
            if(j == 1 and a[i][j] == '*' and a[i + 1][j + 1] == '*') ok = 0;
            if(j == n and a[i][j] == '*' and a[i + 1][j - 1] == '*') ok = 0;  
        }
    }
    if(!ok){
        cout << -1 ; return 0;
    }


    
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(se.find({i, j}) != se.end()) continue;
            if(a[i][j] == '*' and a[i][j + 2] == '*' and a[i + 1][j + 1] == '-'){
                ans++;
                j += 2;
            }
            else if(a[i][j] == '*'){
                ans++;
            }
        }
    }
    cout << ans;
    
    return 0;
}