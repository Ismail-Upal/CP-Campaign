#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if(sum == 0) cout << 0 << endl;
    else{
        int ans = 2;
        if(n % 2) ans += 2;
        cout << ans << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << n - 1 << endl;
        if(n % 2){
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
    }
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