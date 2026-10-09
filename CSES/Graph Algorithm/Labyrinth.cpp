#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1004;
int n, m;
char g[N][N];
bool vis[N][N];
int dis[N][N];
int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};
char path[] = {'R', 'U', 'L', 'D'};
bool valid(int i, int j){
    return (i >= 1 and i <= n and j >= 1 and j <= m);
}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = 1;
    dis[si][sj] = 0;

    while(!q.empty()){
        auto [pi, pj] = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int ci = pi + dx[i];
            int cj = pj + dy[i];

            if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
                q.push({ci, cj});
                vis[ci][cj] = 1;
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
}

void Solve(){
    int si, sj, di, dj;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> g[i][j];
            if(g[i][j] == 'A') si = i, sj = j, g[i][j] = '.';
            if(g[i][j] == 'B') di = i, dj = j, g[i][j] = '.';
        }
    }

    bfs(si, sj);

    if(!vis[di][dj]){
        cout << "NO"; return;
    }
    cout << "YES" << endl << dis[di][dj] << endl;

    string s = "";
    int x = di, y = dj, d = dis[di][dj];
    while(d){
        for(int i = 0; i < 4; i++){
            int ci = x - dx[i];
            int cj = y - dy[i];
            if(valid(ci, cj) and g[ci][cj] == '.' and dis[ci][cj] + 1 == d){
                s += path[i];
                x = ci, y = cj;
                d--;
                break;
            }
        }
    }

    reverse(s.begin(), s.end());
    cout << s ;
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}