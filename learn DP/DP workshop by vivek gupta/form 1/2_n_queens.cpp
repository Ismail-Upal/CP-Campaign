#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, queen[20]; // queen[i] -> where is my queen in row i

bool check(int row, int col){
    for(int i = 0; i < row; i++){
        int prev_row = i;
        int prev_col = queen[i];
        if(prev_col == col or abs(col - prev_col) == abs(row - prev_row)){
            return 0;
        }
    }
    return 1;
}

int rec(int level){ // rec -> number of ways to populate [level....n - 1] rows for a valid configuration
    // level -> row in which queen are placed

    // pruning

    // basecase
    if(level == n) return 1; // as everything above n is valid .

    // compute
    int ans = 0;

    // loop over all choices
    for(int col = 0; col < n; col++){
        // check if the choice is valid
        if(check(level, col)){
            // place the queen
            queen[level] = col;
            // explore the option
            ans += rec(level + 1);
            // revert placing the queen
            queen[level] = -1;
        }
    }

    // return
    return ans;
}

int32_t main()
{   
    opt();
    
    memset(queen, -1, sizeof queen);
    cin >> n;
    cout << rec(0);
    
    return 0;
}