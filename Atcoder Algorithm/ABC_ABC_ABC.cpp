#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int a = 0, b = 0, c = 0;
    for(auto i : s){
        if(i == 'A') a++;
        else if(i == 'B') b++;
        else c++;
    }

    int l = 0, r = n - 1;
    int mask = 0;
    while(l < n and mask < 7){
        if(s[l] == 'A') mask |= (1 << 0), a--;
        if(s[l] == 'B') mask |= (1 << 1), b--;
        if(s[l] == 'C') mask |= (1 << 2), c--;
        l++;
    }

    mask = 0;
    while(r >= 0 and mask < 7){
        if(s[r] == 'A') mask |= (1 << 0), a--;
        if(s[r] == 'B') mask |= (1 << 1), b--;
        if(s[r] == 'C') mask |= (1 << 2), c--;
        r--;
    }
    
    ll ans = 0;
    if(l >= r or !(a and b and c)){
        cout << 0; return;
    }

    map<char, int> mp;
    set<char> se;

    int i = l, j = l;
    while(j <= r){
        while(j <= r and sz(se) != 3){
            mp[s[j]]++;
            se.insert(s[j]);
            j++;
        }
        
        if(sz(se) == 3) ans += r - j + 2; 

        while(i < j - 1 and sz(se) == 3){
            mp[s[i]]--;
            if(mp[s[i]] == 0){
                se.erase(s[i]);
            }
            else ans += r - j + 2;
            
            i++;
        }
    }

    cout << ans;
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
