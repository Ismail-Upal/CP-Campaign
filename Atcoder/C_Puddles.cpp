#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e3 + 3;
char g[N][N];
bool vis[N][N];
int di[] = {0, -1, 0, 1};
int dj[] = {1, 0, -1, 0};
int n, m;
bool valid(int i, int j){ return (i >= 0 and i < n and j >= 0 and j < m);}

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

void Solve(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> g[i][j];
    }

    for(int j = 0; j < m; j++){
        if(g[0][j] == '.' and !vis[0][j]){
            dfs(0, j);
        }
    }
    for(int j = 0; j < m; j++){
        if(g[n - 1][j] == '.' and !vis[n - 1][j]){
            dfs(n - 1, j);
        }
    }

    for(int i = 0; i < n; i++){
        if(g[i][0] == '.' and !vis[i][0]) dfs(i, 0);
    }
    for(int i = 0; i < n; i++){
        if(g[i][m - 1] == '.' and !vis[i][m - 1]) dfs(i, m - 1);
    }


    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == '.' and !vis[i][j]){
                dfs(i, j);
                ans++;
            }
        }
    }

    cout << ans;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}