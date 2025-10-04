#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n;
int queen[15], knight[15];

bool check(int row, int col){
    for(int i = 0; i < row; i++){
        int prev_row = i;
        int prev_col = queen[i];
        if(col == prev_col or abs(row - prev_row) == abs(col - prev_col)){
            return 0;
        }
        int prek_col = knight[i];
        if(prev_row + 1 == row and (prek_col + 2 == col or prek_col - 2 == col)){
            return 0;
        }
        if(prev_row + 2 == row and (prek_col + 1 == col or prek_col - 1 == col)){
            return 0;
        }
    }
    return 1;
}

int rec(int level, int cnt){
    if(level == n){
        if(cnt == n) return 1;
        else return 0;
    }

    int ans = 0;
    for(int col = 0; col < n; col++){
        if(check(level, col)){
            queen[level] = col;
            knight[level] = col;

            ans += rec(level + 1, cnt + 1);

            queen[level] = -1;
            knight[level] = -1;
        }
    }

    return ans;
}

int32_t main()
{   
    opt();
    
    cin >> n;
    cout << rec(0, 0) ;
    
    return 0;
}