#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    stack<ll> stk;
    for(int i = n - 1; i >= 0; i--){
        while(stk.size() and stk.top() - 1 == v[i]){
            stk.pop();
        }
        stk.push(v[i]);
    }

    cout << sz(stk) << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}