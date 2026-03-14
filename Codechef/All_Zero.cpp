#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int a, b, c; cin >> a >> b >> c;
    b -= 2 * a;
    a = 0;
    c -= 3 * b;
    b = 0;

    if(a == b and b == c and a == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
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