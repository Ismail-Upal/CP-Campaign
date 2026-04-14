#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    string s; cin >> s;
    vector<int> v;
    int cnt = 0;
    for(auto i : s){
        if(i == '1'){
            cnt++;
        }
        else{
            v.push_back(cnt);
            cnt = 0;
        }
    }
    v.push_back(cnt);
    sort(v.rbegin(), v.rend());

    int ans = 0;
    for(int i = 0; i < sz(v); i += 2){
        ans += v[i];
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