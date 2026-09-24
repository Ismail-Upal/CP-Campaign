#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<ll> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
        cin >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll X = 0, Y = 0;
    if(n % 2) X = 1, Y = 1;
    else{
        X = x[n / 2] - x[(n - 1) / 2] + 1;
        Y = y[n / 2] - y[(n - 1) / 2] + 1;
    }
    cout << X * Y << endl;
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