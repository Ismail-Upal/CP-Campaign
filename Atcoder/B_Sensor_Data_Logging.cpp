#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, x; cin >> n >> x;
    vector<int> v(n + 1);
    for(int i = 0; i <= n; i++) cin >> v[i];
    for(int i = 0, j = 0; i <= n; i++){
        if(i == 0) cout << i << " " << v[i] << endl;
        else{
            if(abs(v[i] - v[j]) >= x){
                cout << i << " " << v[i] << endl;
                j = i;
            }
        }
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