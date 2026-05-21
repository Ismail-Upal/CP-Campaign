#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll a, n; cin >> a >> n;
    vector<char> b(n);
    map<char, int> mp;
    for(int i = 0; i < n; i++){ 
        cin >> b[i];
        mp[b[i]]++;
    }

    ll ans = LLONG_MAX;
    string s = to_string(a);

    string num = "";
    if(b[0] == '0') num += b[1];
    else num += b[0];
    for(int i = 0; i < sz(s); i++) num += b[0];

    ans = min(ans, abs(a - stoll(num)));
    num = "";

    for(int i = 0; i < sz(s) - 1; i++){
        num += b.back();
    }
    if(num != "") ans = min(ans, abs(a - stoll(num)));
    num = "";
    
    int ok = 0;
    for(auto c : b){
        if(c <= s[0] and c != '0') ok = 1;
    }
    if(ok){
        string t = "";
        int i = 0;
        while(i < sz(s) and mp[s[i]]){
            t += s[i];
            i++;
        }
        if(i == sz(s)){
            cout << 0 << endl; return;        
        } 

        while(i >= 0){
            char mn = b[0];
            for(auto j : b){
                if(j < s[i]) mn = j;
            }
        
            string tmp = t;
            tmp += mn;
            for(int j = i + 1; j < sz(s); j++) tmp += b.back();
            ans = min(ans, abs(a - stoll(tmp)));
            // cout << tmp << endl;
            i--;
            t.pop_back();
        }
    }

    ok = 0;
    for(auto c : b){
        if(c >= s[0]) ok = 1;
    }
    if(ok){
        string t = "";
        int i = 0;
        while(i < sz(s) and mp[s[i]]){
            t += s[i];
            i++;
        }
        if(i == sz(s)){
            cout << 0 << endl; return;
        }

        while(i >= 0){
            char mx = b.back();
            for(auto j : b){
                if(j > s[i]){
                    mx = j; break;
                }
            }

            string tmp = t;
            tmp += mx;
            for(int j = i + 1; j < sz(s); j++) tmp += b[0];
            ans = min(ans, abs(a - stoll(tmp)));
            
            i--;
            t.pop_back();
        }
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
