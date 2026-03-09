#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    for(int i = 1; i < n - 1; i++){
        if(s[i - 1] == '1' and s[i + 1] == '1') s[i] = '1';
    }

    int mx = count(s.begin(), s.end(), '1');
    int mn = 0, j = 0;
 
    for(int i = 0; i < n; i++){
        if(s[i] == '1') j++;
        else{
            if(j > 0) mn += max(0, j - (((j + 1) / 2) - 1));
            j = 0;
        }
    } 
    if(j > 0) mn += max(0, j - (((j + 1) / 2) - 1));
    
    cout << mn << " " << mx << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}