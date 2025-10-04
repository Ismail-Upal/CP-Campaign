#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, m; 
vector<vector<int>> ans;
void f(int i, vector<int> &v){
    if(v.size() == n){
        ans.push_back(v);
        return;
    }
    if(i > m) return;


    v.push_back(i);
    f(i + 1, v); // pick
    v.pop_back();

    f(i + 1, v); // skip
    
}

int32_t main()
{   
    opt();
    
    cin >> n >> m;
    
    vector<int> v;
    f(1, v);
    sort(ans.begin(), ans.end());
    for(auto v : ans){
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}