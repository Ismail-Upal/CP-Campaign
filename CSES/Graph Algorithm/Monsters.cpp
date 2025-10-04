#include<bits/stdc++.h>
using namespace std;
const int N = 1003;
char g[N][N];
bool vis[N][N];
int dis[N][N];
int di[] = {0, 1, 0, -1}, dj[] = {1, 0, -1, 0};
int n, m, desi, desj;
bool valid(int i, int j){return (i >= 0 and i < n and j >= 0 and j < m);}
queue<pair<int, int>> q;
int ans;
void bfs(int si, int sj){
    q.push({si, sj});
    vis[si][sj] = 1;
    dis[si][sj] = 0;
    
    while(!q.empty()){
        auto [pi, pj] = q.front(); q.pop();
        for(int i = 0; i < 4; i ++){
            int ci = pi + di[i];
            int cj = pj + dj[i];
            if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] != '#'){
                q.push({ci, cj});
                vis[ci][cj] = vis[pi][pj];
                dis[ci][cj] = dis[pi][pj] + 1;
                if(vis[ci][cj] == 1){
                    if(ci == 0 or cj == 0) ans = dis[ci][cj];
                    if(ci == n - 1 or cj == m - 1) ans = dis[ci][cj];
                    if(ans){
                        desi = ci, desj = cj;
                        break;
                    }
                }
            }
        }
        if(ans) break;
    }
}

int main()
{   
    int si, sj;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
            if(g[i][j] == 'M') q.push({i, j}), vis[i][j] = -1;
            if(g[i][j] == 'A') si = i, sj = j;
        }
    }

    bfs(si, sj);

    if(!ans) cout << "NO" ;
    else{
        cout << "YES" << endl << ans << endl;
        string path = "";
        for(int i = 0; i < 4; i++){
            int ci = desi + di[i];
            int cj = desj = di[i];
            if(valid(ci, cj) and vis[ci][cj] == 1 and dis[ci][cj] == ans - 1){
                if(di[i] == 0 and dj[i] == 1) path += 'L';
                if(di[i] == 0 and dj[i] == -1) path += 'R';
                if(di[i] == 1 and dj[i] == 0) path += 'U';
                if(di[i] == -1 and dj[i] == 0) path += 'D';
                ans--;
            }
            if(ans == 0) break;
        }
        reverse(path.begin(), path.end());
        cout << path ;
    } 
    
    return 0;
}