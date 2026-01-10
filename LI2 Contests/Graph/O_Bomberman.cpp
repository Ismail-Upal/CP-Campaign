#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1004;
int n, m;
char g[N][N];
int dis[N][N];
int di[] = {0, 0, -1, 1};
int dj[] = {1, -1, 0, 0};
bool valid(int i, int j){
    return (i >= 1 and i <= n and j >= 1 and j <= m);
}
struct cmp{
    bool operator()(pair<pair<int, int>, int>a, pair<pair<int, int>, int>b){
        return a.second > b.second;
    }
};
void bfs(int si, int sj){
    priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, cmp> pq;

    dis[si][sj] = 0;
    pq.push({{si, sj}, 0});

    while(!pq.empty()){
        auto par = pq.top(); pq.pop();
        int pi = par.first.first;
        int pj = par.first.second;
        int pw = par.second;

        if(pw > dis[pi][pj]) continue;
        for(int i = 0; i < 4; i++){
            int ci = pi + di[i];
            int cj = pj + dj[i];
            int cw = 0;
            if(!valid(ci, cj)) continue;
            if(g[ci][cj] == '#') cw++;

            if(pw + cw < dis[ci][cj]){
                dis[ci][cj] = pw + cw;
                pq.push({{ci, cj}, dis[ci][cj]});
            }
        }
    }
}

int main()
{   
    opt();
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> g[i][j];
            dis[i][j] = 1e9;
        }
    }

    bfs(1, 1);

    cout << dis[n][m];
    
    return 0;
}