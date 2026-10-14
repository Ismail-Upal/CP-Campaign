#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    string s; cin >> s;
    int n = sz(s);
    string t = "";
    map<int, int> mp;

    for(int i = 0, j = 0; i < n; ){
        t += s[i];
        while(i < n and s[i] == t.back()){
            mp[j]++;
            i++;
        }
        j++;
    }

    ll ok1 = 0, ok2 = 0;
    for(int i = 0; i < sz(t); i++){ 
        if(mp[i] > 2) ok1 = 1;
        if(mp[i] == 1 and i > 0 and i + 1 < sz(t)) ok2 = 1;
    }

    cout << 1 + ok1 + ok2 << endl;
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