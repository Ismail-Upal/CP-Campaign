#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second > b.second) return true;
    return a.first < b.first;
}
int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
    
        vector<int> g[n + 1], indeg(n + 1);
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            for(int j = 0; j < n; j++){
                if(s[j] == '1'){
                    g[i + 1].push_back(j + 1);
                    indeg[j + 1]++;
                }
            }
        }

        vector<pair<int, int>> ans;
        for(int i = 1; i <= n; i++){
            ans.push_back({i, indeg[i]});
        }

        sort(ans.begin(), ans.end(), cmp);

        for(auto i : ans) cout << i.first << " " ;
        cout << endl;
    }
    
    return 0;
}