#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> g[n + 3];
        for(int i = 1; i <= n; i++){
            string s ;cin >> s;
            for(int j = 1; j <= n; j++){
                if(s[j - 1] == '1'){
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        for(int i = 1; i <= n; i++){
            sort(g[i].begin(), g[i].end());
        }
        map<int, int> mp;
        deque<int> ans;
        for(int i = 1; i <= n; i++){
            if(!mp[i]){
                ans.push_front(i);
                mp[i]++;
            }
            for(auto v : g[i]){
                if(v > i and !mp[v]){
                    ans.push_back(v);
                    mp[v]++;
                }
            }
        }
        for(auto i : ans) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}