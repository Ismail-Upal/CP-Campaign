#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
unordered_map<string, bool> vis;
unordered_map<string, string> par;

vector<string> neighbours(string s){
    vector<string> res;
    string t = s;
    if(t[0] != '9'){
        t[0]++;
        res.push_back(t);
    }
    t = s;
    if(t[3] != '1'){
        t[3]--;
        res.push_back(t);
    }
    t = ""; t += s[3];
    for(int i = 0; i < 3; i++){
        t += s[i];
    }
    res.push_back(t);
    t = "";
    for(int i = 1; i < 4; i++){
        t += s[i];
    }
    t += s[0]; 
    res.push_back(t);

    return res;
}

void bfs(string src, string des){
    queue<string> q;
    q.push(src);
    vis[src] = 1;
    par[src] = "";
    while(!q.empty()){
        string u = q.front(); q.pop();
        if(u == des) return;
        for(auto v : neighbours(u)){
            if(!vis[v]){
                q.push(v);
                par[v] = u;
                vis[v] = 1;
            }
        }
    }
}

int main()
{   
    opt();
    
    string s, t; cin >> s >> t;
    bfs(s, t);

    vector<string> ans;
    for(string cur = t; cur != ""; cur = par[cur]){
        ans.push_back(cur);
    }
    reverse(ans.begin(), ans.end());
    for(auto i : ans) cout << i << endl;
    
    return 0;
}