#include <bits/stdc++.h>
using namespace std;

const int N = 103;
char g[N][N];
bool vis[N][N];
int dis[N][N]; // shortest distance
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j){
    if (i < 0 or i >= n or j < 0 or j >= m){
        return false;
    }
    return true;
}
void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();
        // work : cout << si << " " << sj << endl;
        for(int i = 0; i < 4; i++){
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }

    }
}
int main() {   
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof vis);
    memset(dis, -1, sizeof dis);
    if (valid(si, sj) && g[si][sj] == '.'){
        bfs(si, sj);
    }
    return 0;
}
