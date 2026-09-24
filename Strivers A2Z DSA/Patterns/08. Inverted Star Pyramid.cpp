#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    int str = 2 * (n - 1) + 1, spc = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= spc; j++){
            cout << " ";
        }
        for(int j = 1; j <= str; j++){
            cout << "*";
        }
        str -= 2, spc++;
        cout << endl;
    }
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}