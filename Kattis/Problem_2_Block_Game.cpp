#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("blocks");
    
    int n; cin >> n;
    map<int, int> mp;

    for(int j = 0; j < n; j++){

        string a, b; cin >> a >> b;

        map<int, int> m1, m2;

        for(auto i : a){
            int c = i - 'a';
            m1[c + 1]++;
        }
        for(auto i : b){
            int c = i - 'a';
            m2[c + 1]++;
        }
        for(int i = 1; i <= 26; i++){
            mp[i] += max(m1[i], m2[i]);
        }
    }

    for(int i = 1; i <= 26; i++) cout << mp[i] << endl;
    return 0;
}