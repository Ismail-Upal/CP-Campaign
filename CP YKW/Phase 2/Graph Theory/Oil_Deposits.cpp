#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

const int N = 103;
int n, m;
string g[N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1 ,0}, {1, 0}, {-1, 1}, {1, -1}, {1, 1}, {-1, -1}};
bool valid(int i, int j){
    return i >= 0 and i < n and j >= 0 and j < m;
}
void dfs(int si, int sj){
    vis[si][sj] = true;
    for(int i = 0; i < 8; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '@'){
            dfs(ci, cj);
        }
    }
}
int32_t main()
{   
    opt();
    
    while(cin >> n >> m and n and m){
        for(int i = 0; i < n; i++){
            cin >> g[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] and g[i][j] == '@'){
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                vis[i][j] = 0;
            }
        }
    }
    
    return 0;
}