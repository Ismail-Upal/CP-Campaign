#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e3 + 3;
string g[N];
bool vis[N][N];
int n, m;
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
bool valid(int i, int j){
    if(i < 0 or i >= n and j < 0 or j >= m) return false;
    return true;
}
void dfs(int si, int sj){
    vis[si][sj] = 1;
    for(int i = 0; i < 4; i++){
        int ci = si + di[i];
        int cj = sj + dj[i];
        if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
            dfs(ci, cj);
        }
    }
}
int32_t main()
{   
    opt();
    
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> g[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] and g[i][j] == '.'){
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    
    return 0;
}