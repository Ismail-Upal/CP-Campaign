#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
// #define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    int one, l = 1, r = n;

    cout << "? " << l << " " << r << endl;
    cin >> one;

    if(n == one or one == 0){
        cout << "! NO" << endl; return;
    }

    ll tot = one;
    l = l + one;

    cout << "? " << l << " " << r << endl;
    cin >> one;

    if(one == 0) cout << "! NO" << endl;
    else cout << "! YES" << endl;
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