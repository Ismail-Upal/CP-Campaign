#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int x, y; cin >> x >> y;
    int ok = 0;
    if(x % 2 == 0 and y % 2 == 0) ok = 1;
    else if(x % 2 != y % 2) ok = 1;

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}