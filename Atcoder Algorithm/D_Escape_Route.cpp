#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e4 + 4;
vector<string> g(N);
bool vis[N][N];
vector<string> ans(N);
int di[] = {0, -1, 0, 1, -1, -1, 1, 1};
int dj[] = {1, 0, -1, 0, 1, -1, -1, 1};
string mov = "<v>^";
int n, m;

bool valid(int i, int j){ return (i >= 0 and i < n and j >= 0 and j < m);}
queue<pair<int, int>> q;

void bfs(){
    while(!q.empty()){
        pair<int, int> par = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ci = par.first + di[i];
            int cj = par.second + dj[i];
            if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
                q.push({ci, cj});
                vis[ci][cj] = 1;
                ans[ci][cj] = mov[i];
            }
        }
    }
}


int32_t main()
{   
    opt();

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        cin >> g[i];
        ans[i] = g[i];
        for(int j = 0; j < m; j++){
            if(g[i][j] == 'E'){
                q.push({i, j});
                vis[i][j] = 1;
                ans[i][j] = 'E';
            }
        }
    }

    
    bfs();

    for(int i = 0; i < n; i++) cout << ans[i] << endl;
    
    return 0;
}