#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    string t = "";
    map<char, int> mp;

    for(int i = 1; i < n; i += 2){ 
        if((s[i] == 'R' and s[i - 1] == 'B') or (s[i - 1] == 'R' and s[i] == 'B')){
            t += "P"; mp['P']++;
        }
        else if((s[i] == 'R' and s[i - 1] == 'G') or (s[i - 1] == 'R' and s[i] == 'G')){
            t += "Y"; mp['Y']++;
        }
        else if((s[i] == 'B' and s[i - 1] == 'G') or (s[i - 1] == 'B' and s[i] == 'G')){
            t += "C"; mp['C']++;
        }
    }

    if(n % 2){
        t.push_back(s.back()); 
        mp[s.back()]++;
    }
    
    n = sz(t);

    if(t[0] != t[1]) cout << t[0];
    for(int i = 1; i < n; i++){
        if(t[i] == t[i - 1]) continue;
        cout << t[i];
    }
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