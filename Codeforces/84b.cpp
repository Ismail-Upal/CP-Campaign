#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    int ok = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]) ok = 1;
    }
    if(!ok){
        cout << "Yes" << endl;
        return;
    }

    for(int i = 0; i < m - 1; i++){
        if(t[i] == t[i + 1]){
            cout << "No" << endl;
            return;
        }
    }

    if(t[0] != t[m - 1]){
        cout << "No" << endl;
        return;
    }

    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]){
            if(s[i] == t[0] ){
                cout << "No" << endl;
                return;
            }
        }
    }

    cout << "Yes" << endl;
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