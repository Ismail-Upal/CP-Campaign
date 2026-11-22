#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        if(mp[x] == 1) v.push_back(x);
    }

    sort(v.begin(), v.end());

    vector<int> ans;
    for(int i : v){
        ans.push_back(i);
        mp[i]--;
    }

    int res = sz(ans);

    reverse(v.begin(), v.end());
    for(int i : v){
        if(mp[i]){
            res++;
            while(mp[i]){
                ans.push_back(i);
                mp[i]--;
            }
        }
    }

    cout << res << endl;
    for(int i : ans) cout << i << " ";
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