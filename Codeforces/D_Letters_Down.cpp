#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int l = 0, r = n - 1;
    int ans = 0;
    vector<pair<char, char>> v;

    while(l < r){
        if(s[l] < s[r]) swap(s[l], s[r]);
        v.push_back({s[l], s[r]});
        l++, r--;
    }
    
    sort(v.rbegin(), v.rend());

    for(int i = 0; i < sz(v); ){ 
        char l = v[i].first, r = v[i].second;
        // cout << l << r << endl;
        while(i < sz(v)){
            char m = v[i].first;
            if(r <= m and m <= l){
                r = min(r, v[i].second);
                i++;
            }
            else{
                break; 
            }
        }

        ans += abs(r - l);
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