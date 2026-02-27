#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    if(n % 2){
        if(s[0] == 'b'){
            cout << "NO" << endl; 
            return;
        }
        else s.erase(0, 1);
    }

    for(int i = 1; i < n; i += 2){
        if(s[i] == '?' and s[i] == s[i - 1]) continue;
        if(s[i] == s[i - 1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}