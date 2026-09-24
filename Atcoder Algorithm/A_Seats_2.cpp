#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m; cin >> n >> m;
    int x = (n + 1) / 2;
    if(m <= x) cout << "Yes";
    else cout << "No";
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; 
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}