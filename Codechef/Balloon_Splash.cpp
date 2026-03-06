#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int x, y; cin >> x >> y;
    if(x == y) cout << "Draw";
    else if(x > y) cout << "Alice";
    else cout << "Bob";
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;// cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}