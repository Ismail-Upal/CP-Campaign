#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define nl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
void center_spiral(int r, int c, int n, int val, vector<vector<int>> &ans){
    if(r == n or c == n or r < 0 or c < 0 or ans[r][c] != -1) return;

    ans[r][c] = val--;
    while(c + 1 < n and ans[r][c + 1] == -1) ans[r][++c] = val--;
    while(r + 1 < n and ans[r + 1][c] == -1) ans[++r][c] = val--;
    while(c > 0 and ans[r][c - 1] == -1) ans[r][--c] = val--;
    while(r > 0 and ans[r - 1][c] == -1) ans[--r][c] = val--;

    center_spiral(r, c + 1, n, val, ans);
}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        
        vector<vector<int>> ans(n, vector<int>(n, -1));
        center_spiral(0, 0, n, n * n - 1, ans);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) cout << ans[i][j] << " ";
            cout << nl;
        }
    }
    
    return 0;
}