#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1004, inf = 1e9;
char g[N][N];
int n, m;
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
bool vis[N][N];
int d[N][N];
bool valid(int i, int j){
    return (i >= 0 and i < n and j >= 0 and j < m);
}

pair<int, int> par[N][N];

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = 1;
    d[si][sj] = 0;
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ci = p.first + di[i];
            int cj = p.second + dj[i];
            if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] != '#'){
                q.push({ci, cj});
                vis[ci][cj] = 1;
                par[ci][cj] = {p.first, p.second};
                d[ci][cj] = d[p.first][p.second] + 1;
            }
        }
    }
}

int32_t main()
{   
    opt();
    pair<int, int> start, end;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
            d[i][j] = inf;
            if(g[i][j] == 'A') start = {i, j};
            if(g[i][j] == 'B') end = {i, j};
        }
    }
    bfs(start.first, start.second);
    
    if(d[end.first][end.second] == inf) cout << "NO" << endl;
    else{
        vector<pair<int, int>> path;
        auto cur = end;
        while(cur != start){
            path.push_back(cur);
            cur = par[cur.first][cur.second];
        }
        path.push_back(start);
        reverse(path.begin(), path.end());
        cout << "YES" << endl << d[end.first][end.second] << endl;
        for(int i = 0; i < path.size() - 1; i++){
            int di = path[i].first - path[i + 1].first;
            int dj = path[i].second - path[i + 1].second;
            if(di == 1) cout << 'U';
            else if(di == -1) cout << 'D';
            else if(dj == 1) cout << 'L';
            else if(dj == -1) cout << 'R'; 
        }
        cout << endl;
    }
    
    return 0;
}