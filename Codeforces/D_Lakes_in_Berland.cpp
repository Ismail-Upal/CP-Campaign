#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 100;
char g[N][N];
int n, m, k;
int di[] = {0, 1, 0, -1};
int dj[] = {1, 0, -1, 0};
bool vis[N][N];
bool valid(int i, int j){
    return (i >= 0 and i < n and j >= 0 and j < m);
}

int cnt = 0, ok = 1;
void dfs(int si, int sj){
    if(si == 0 or si == n - 1 or sj == 0 or sj == m - 1){
        ok = 0;
    }
    cnt++;
    vis[si][sj] = 1;
    for(int i = 0; i < 4; i++){
        int ci = si + di[i];
        int cj = sj + dj[i];
        if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
            dfs(ci, cj);
        }
    }
}
void dfss(int si, int sj){
    vis[si][sj] = 1;
    g[si][sj] = '*';
    for(int i = 0; i < 4; i++){
        int ci = si + di[i];
        int cj = sj + dj[i];
        if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
            dfss(ci, cj);
        }
    }
}

int main()
{   
    opt();
    
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> g[i][j];
    }
    vector<int> lakes;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] and g[i][j] == '.'){
                dfs(i, j);
                if(ok) lakes.push_back(cnt);
                ok = 1; cnt = 0;
            }
        }
    }
    int ans = 0;
    sort(lakes.begin(), lakes.end());
    map<int, int> mp;
    for(int i = 1; i <= sz(lakes) - k; i++){
        ans += lakes[i - 1];
        mp[lakes[i - 1]]++;
    }
    cout << ans << endl;

    memset(vis, false, sizeof vis);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] and g[i][j] == '.'){
                dfs(i, j);
                if(ok and mp[cnt] > 0){
                    memset(vis, false, sizeof vis);
                    dfss(i, j);
                    mp[cnt]--;
                }
                ok = 1; cnt = 0;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << g[i][j];
        }
        cout << endl;
    }
    
    return 0;
}