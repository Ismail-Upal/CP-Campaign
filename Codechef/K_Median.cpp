#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    sort(v.begin() + 1, v.end());

    set<int> ans;
    int m = n - k;
    for(int i = 1, j = 1; j <= n; ){
        if(j - i + 1 < m) j++;
        else if(j - i + 1 == m){
            int k = (j - i + 1 + 1) / 2;
            ans.insert(v[i + k - 1]);
            i++, j++;
        }
    }
    for(auto i : ans) cout << i << " ";
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
