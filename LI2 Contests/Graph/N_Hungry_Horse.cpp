#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e2;
int g[N][N];
bool vis[N][N];
int dis[N][N];
int di[] = {-1, 1, 2, 2, -1, 1, -2, -2};
int dj[] = {2, 2, -1, 1, -2, -2, -1, 1};
int n;
pair<int, int> par[N][N];
bool valid(int i, int j){ return (i >= 1 and i <= n and j >= 1 and j <= n);}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = 1;
    dis[si][sj] = 0;
    par[si][sj] = {-1, -1};
    while(!q.empty()){
        auto [pi, pj] = q.front();
        q.pop();
        for(int i = 0; i < 8; i++){
            int ci = pi + di[i];
            int cj = pj + dj[i];
            if(valid(ci, cj) and !vis[ci][cj]){
                q.push({ci, cj});
                vis[ci][cj] = 1;
                dis[ci][cj] = dis[pi][pj] + 1; 
                par[ci][cj] = {pi, pj};
            }
        }
    }
}

int main()
{   
    opt();
    
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bfs(x1, y1);
    
    cout << dis[x2][y2] << endl;
    
    return 0;
}