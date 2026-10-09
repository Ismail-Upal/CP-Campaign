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
int di[] = {0, -1, 0, 1};
int dj[] = {1, 0, -1, 0};
bool valid(int i, int j){
    return (i >= 1 and i <= n and j >= 1 and j <= m);
}

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

void Solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> g[i][j];
        }
    }

    int room = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!vis[i][j] and g[i][j] == '.'){
                dfs(i, j);
                room++;
            }
        }
    }

    cout << room;
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