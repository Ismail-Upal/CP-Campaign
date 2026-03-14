#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<int> ans(n + 1, 1); 
    
    for(int i = 1; i <= n; i++){
        set<int> div;
        for(int j = 1; j * j <= i; j++){
            if(i % j == 0){
                div.insert(j);
                if((i / j) != j) div.insert(i / j);
            }
        }

        for(auto j : div){ 
            if(j != i and v[j] < v[i]) ans[i] = max(ans[i], ans[j] + 1);
        } 
    }

    int mx = *max_element(ans.begin() + 1, ans.end());
    cout << mx << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}