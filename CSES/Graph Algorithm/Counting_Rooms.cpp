#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
char g[N][N];
bool vis[N][N];
int di[] = {0, 1, 0, -1};
int dj[] = {1, 0, -1, 0};
int n, m;
bool valid(int i, int j){return (i >= 0 and i < n and j >= 0 and j < m);}

void dfs(int si, int sj){
    vis[si][sj] = 1;
    for(int i = 0; i < 4; i++){
        int ci = si + di[i];
        int cj = sj + dj[i];
        if(valid(ci, cj) and !vis[ci][cj] and g[ci][cj] == '.'){
            dfs(ci, cj);
        }
    }
}

int main()
{   
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> g[i][j];
    }

    int room = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] and g[i][j] == '.'){
                dfs(i, j); room++;
            }
        }
    }

    cout << room;
    
    return 0;
}