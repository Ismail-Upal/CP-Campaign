#include <bits/stdc++.h>
using namespace std;

const int N = 103;
char g[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j){
    if (i < 0 or i >= n or j < 0 or j >= m){
        return false;
    }
    return true;
}
void dfs(int si, int sj) {
    // work : cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.') {
            dfs(ci, cj);
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
    if (valid(si, sj) && g[si][sj] == '.'){
        dfs(si, sj);
    }
    return 0;
}
