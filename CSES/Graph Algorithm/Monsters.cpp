#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1003;
int n, m;
char g[N][N];
int dis[N][N];
int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};
char mov[] = {'L', 'D', 'R', 'U'};
bool valid(int i, int j){
    return (i >= 1 and i <= n and j >= 1 and j <= m);
}
queue<pair<int, int>> q;

void bfs(int si, int sj){
    q.push({si, sj});
    dis[si][sj] = 0;

    while(!q.empty()){
        auto [pi, pj] = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int ci = pi + dx[i];
            int cj = pj + dy[i];

            if(valid(ci, cj) and g[ci][cj] == '.'){
                q.push({ci, cj});
                g[ci][cj] = g[pi][pj];
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
}

void Solve(){
    int si, sj;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> g[i][j];
            if(g[i][j] == 'A') si = i, sj = j;
            if(g[i][j] == 'M') q.push({i, j});
        }
    }
   
    bfs(si, sj);

    int di, dj, ok = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1 and g[i][j] == 'A') ok = 1, di = i, dj = j;
            if(i == n and g[i][j] == 'A') ok = 1, di = i, dj = j;
            if(j == 1 and g[i][j] == 'A') ok = 1, di = i, dj = j;
            if(j == m and g[i][j] == 'A') ok = 1, di = i, dj = j;
        }
    }

    if(!ok){
        cout << "NO"; return;
    }
    cout << "YES" << endl << dis[di][dj] << endl;
    string s = "";
    int d = dis[di][dj];
    while(d){
        for(int i = 0; i < 4; i++){
            int ci = di + dx[i];
            int cj = dj + dy[i];

            if(valid(ci, cj) and g[ci][cj] == 'A' and dis[ci][cj] + 1 == d){
                s += mov[i];
                d--;
                di = ci, dj = cj;
            }
        }
    }

    reverse(s.begin(), s.end());
    cout << s;
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