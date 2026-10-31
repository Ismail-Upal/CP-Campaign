#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    char a, b; cin >> a >> b;
    // cout << (int) a - 33 + 1 << " " << (int) b - 33 + 1;
    int x = (int) a - 33 + 1;
    int y = (int) b - 33 + 1;

    vector<pair<int, int>> ans;

    for(int i = 1; i <= 94; i++){
        if(x % i == y % i){
            int r = i;
            int c = (94 + i - 1) / i;
            ans.push_back({r, c});
        }
    }

    for(auto [i, j] : ans) cout << i << " " << j << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ":" << endl;
        Solve();
        cout << endl;
    }
    
    return 0;
}