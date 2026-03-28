#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int n; cin >> n;
    int ans = 1e9;
    for(int i = 0; i <= 1000; i++){
        if(i % 2 == 0 and i % 5 == 0) continue;
        if(i % 2 == 0 or i % 5 == 0){
            ans = min(ans, abs(i - n));
        }
    }

    cout << ans << endl;
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