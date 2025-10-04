#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
char g[N][N];
bool vis[N][N];
int dis[N][N];
int di[] = {0, 1, 0, -1}, dj[] = {1, 0, -1, 0};
int n, m;
bool valid(int i, int j){return (i >= 0 and i < n and j >= 0 and j < m);}
queue<pair<int, int>> q;

void bfs(int si, int sj){
    q.push({si, sj});
    vis[si][sj] = 1; dis[si][sj] = 0;

    while(!q.empty()){
        auto [pi,pj] = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ci = pi + di[i];
            int cj = pj + dj[i];
            if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
                q.push({ci, cj});
                vis[ci][cj] = 1;
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
}

int main()
{   
    int si, sj, desi, desj;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
            if(g[i][j] == 'A') si = i, sj = j, g[i][j] = '.';
            if(g[i][j] == 'B') desi = i, desj = j, g[i][j] = '.';
        }
    }

    bfs(si, sj); 

    if(!vis[desi][desj]) cout << "NO" ;
    else{
        string path;
        int x = dis[desi][desj];
        cout << "YES" << endl << x << endl;
        
        while(x > 0){
            for(int i = 0; i < 4; i++){
                int ci = desi - di[i];
                int cj = desj - dj[i];
                if(valid(ci, cj) and vis[ci][cj] and dis[ci][cj] == x - 1){
                    if(di[i] == 0 and dj[i] == 1) path.push_back('R');
                    if(di[i] == 0 and dj[i] == -1) path.push_back('L');
                    if(di[i] == 1 and dj[i] == 0) path.push_back('D');
                    if(di[i] == -1 and dj[i] == 0) path.push_back('U');
                    x--;
                    desi = ci, desj = cj;
                    break;
                }
            }
        }
        
        reverse(path.begin(), path.end());
        cout << path;
    }
    
    return 0;
}