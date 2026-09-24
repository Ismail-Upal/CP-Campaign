#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
// #define endl '\n'
#define sz(x) (ll)(x).size()

string query(int i, int j){
    cout << "? " << i << " " << j << endl;
    string res; cin >> res;
    return res;
}

void Solve(){
    int n; cin >> n;

    int ans = 0;
    for(int i = 1, j = 2; i < n; i++){
        j = max(j, i + 1);
        while(j <= n and query(i, j) == "Yes"){
            j++;
        }

        ans += j - i - 1;
    }
    cout << "! " << ans << endl;
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