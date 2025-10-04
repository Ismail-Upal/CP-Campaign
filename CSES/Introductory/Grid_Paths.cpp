#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
const int n = 7, m = 7, sz = 48;
bool valid(int i, int j){
    return (i >= 0 and i < n and j >= 0 and j < m);
}
string s;
bool vis[n][m];
int ei = 6, ej = 0;
int path(int si, int sj, int id){
    if(id == sz){
        if(si == ei and sj == ej) return 1;
        else return 0;
    }
    if(si == ei and sj == ej) return 0;
 
    if(vis[si][sj]) return 0;
 
    if(si == 0 and sj > 0 and sj < m - 1 and !vis[si][sj + 1] and !vis[si][sj - 1]) return 0;
    if(sj == m - 1 and si > 0 and si < n - 1 and !vis[si - 1][sj] and !vis[si + 1][sj]) return 0;
    if(si == n - 1 and sj > 0 and sj < m - 1 and !vis[si][sj - 1] and !vis[si][sj + 1]) return 0;
    if(sj == 0 and si > 0 and sj < n - 1 and !vis[si - 1][sj] and !vis[si + 1][sj]) return 0;
 

    vis[si][sj] = true;
    int ans = 0;
    if(s[id] == '?'){
        for(int i = 0; i < 4; i++){
            int ci = si + di[i];
            int cj = sj + dj[i];
            if(valid(ci, cj) and !vis[ci][cj]){
                ans += path(ci, cj, id + 1);
            }
        }
    }
    else{
        if(s[id] == 'R'){
            int ci = si + 0;
            int cj = sj + 1;
            if(valid(ci, cj) and !vis[ci][cj]){
                ans += path(ci, cj, id + 1);
            }
        }
        else if(s[id] == 'U'){
            int ci = si - 1;
            int cj = sj + 0;
            if(valid(ci, cj) and !vis[ci][cj]){
                ans += path(ci, cj, id + 1);
            }
        }
        else if(s[id] == 'D'){
            int ci = si + 1;
            int cj = sj + 0;
            if(valid(ci, cj) and !vis[ci][cj]){
                ans += path(ci, cj, id + 1);
            }
        }
        else if(s[id] == 'L'){
            int ci = si + 0;
            int cj = sj - 1;
            if(valid(ci, cj) and !vis[ci][cj]){
                ans += path(ci, cj, id + 1);
            }
        }
    }
    vis[si][sj] = false;
    return ans;
}

int32_t main()
{   
    opt();
    
    cin >> s;
    cout << path(0, 0, 0);
    
    return 0;
}