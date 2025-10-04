#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, m;
int queen[8], block[8][8];

bool check(int row, int col){
    for(int i = 0; i < row; i++){
        int prev_row = i;
        int prev_col = queen[i];
        if(col == prev_col or abs(row - prev_row) == abs(col - prev_col)){
            return 0;
        }
    }
    return 1;
}

int rec(int level, int cnt){
    if(level == n){
        if(cnt == 8) return 1;
        else return 0;
    }

    int ans = 0;
    for(int col = 0; col < m; col++){
        if(check(level, col) and block[level][col] != -1 and cnt < 8){
            queen[level] = col;
            ans += rec(level + 1, cnt + 1);
            queen[level] = -1;
        }
    }
    return ans;
}

int32_t main()
{   
    opt();
    
    n = 8, m = 8;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c; cin >> c;
            if(c == '*') block[i][j] = -1;
        }
    }
    
    cout << rec(0, 0) ;
    
    return 0;
}