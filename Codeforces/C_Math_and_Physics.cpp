#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    int one = 0, sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        if(v[i] == 1) one++;
    }

    if(one == n){
        cout << -1 << endl;
        return;
    }
    if(one == n - 1){
        if(v[0] != 1){
            cout << v[0] << endl;
            return;
        }
        else if(v[n - 1] != 1){
            cout << v[n - 1] << endl;
            return;
        }
    }
    if(one == n - 2){
        if(v[0] != 1 and v[n - 1] != 1){
            cout << (v[0] + v[n - 1] - 1) << endl;
            return;
        }
    }

    cout << sum - 1 << endl;
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