#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> seq;
    int op = 0, ans = 0;
    for(int i = n - 1; i >= 0; i--){
        if(op) v[i] *= -1;
        if(v[i] > 0){
            ans++;
            op = op ^ 1;
            seq.push_back(i + 1);
        }
    }

    cout << ans << endl;
    for(auto i : seq) cout << i << " ";
    cout << endl;
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

