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
    
    int n; cin >> n;
    vector<int> v(n + 1), ans(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(i == v[i]) ans[i] = i;
    }
    for(int i = n; i >= 1; i--){
        ans[i] = ans[v[i]];
    }

    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    
    return 0;
}