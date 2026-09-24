#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m, q; cin >> n >> m >> q;
    while(q--){
        int t, x; cin >> t >> x;
        if(t == 1){
            cout << x * m << endl;
            n -= x;
        }
        else{
            cout << x * n << endl;
            m -= x;
        }
    }
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}