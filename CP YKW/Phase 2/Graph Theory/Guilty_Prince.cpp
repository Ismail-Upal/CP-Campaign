#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 22;
string g[N];
bool vis[N][N];
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
int n, m;
bool valid(int i, int j){
    if(i < 0 or i >= n or j < 0 or j >= m){
        return false;
    }
    return true;
}
int cnt;
void dfs(int si, int sj){
    cnt ++;
    vis[si][sj] = true;
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
    
    tc{
        cin >> m >> n;
        for(int i = 0; i < n; i++){
            cin >> g[i];
        }
        int si, sj;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(g[i][j] == '@'){
                    si = i, sj = j;
                    break;
                }
            }
        }
        cnt = 0;
        dfs(si, sj);
        cout << "Case "<< _ << ": " << cnt << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                vis[i][j] = 0;
            }
        }
    }
    
    return 0;
}