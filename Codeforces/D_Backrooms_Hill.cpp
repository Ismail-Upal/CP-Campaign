#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i % 2 == 0) mp[v[i]] = 1;
        else mp[v[i]] = -1;
    }
    
    sort(v.rbegin(), v.rend());
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += mp[v[i]];
        if(abs(sum) > 1){
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
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