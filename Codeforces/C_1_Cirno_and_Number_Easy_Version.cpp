#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll a, n; cin >> a >> n;
    vector<ll> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    ll ans = LLONG_MAX;
    string s = to_string(a);

    string num = "";
    if(b[0] == 0) num += b[1] + '0';
    else num += b[0] + '0';
    for(int i = 0; i < sz(s); i++) num += b[0] + '0';

    ans = min(ans, abs(a - stoll(num)));
    num = "";

    for(int i = 0; i < sz(s) - 1; i++){
        num += b.back() + '0';
    }
    if(num != "") ans = min(ans, abs(a - stoll(num)));
    
    num = "";
    int i = 0;
    while(i < sz(s)){
        if(s[i] - '0' == b[0]) num += s[i];
        else if(s[i] - '0' == b[1]) num += s[i];
        else break;
        i++;
    }

    if(i == sz(s)){
        cout << 0 << endl;
        return;
    }

    int mx = b.back();
    for(auto j : b){
        if(j > s[i] - '0'){
            mx = j; break;
        }
    }

    num += mx + '0';
    i++;

    while(i < sz(s)){
        num += b[0] + '0';
        i++;
    }
    ans = min(ans, abs(a - stoll(num)));

    num = "", i = 0;
    while(i < sz(s)){
        if(s[i] - '0' == b[0]) num += s[i];
        else if(s[i] - '0' == b[1]) num += s[i];
        else break;
        i++;
    }

    int mn = b[0];
    for(auto j : b){
        if(j > s[i] - '0'){
            break;
        }
        mn = j;
    }
    if(i == 0 and mn == 0) mn = b[1];

    num += mn + '0';
    i++;

    while(i < sz(s)){
        num += b.back() + '0';
        i++;
    }

    ans = min(ans, abs(a - stoll(num)));

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
