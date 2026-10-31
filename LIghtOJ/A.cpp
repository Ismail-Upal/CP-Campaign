#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n; 
    string s;cin >> s;

    for(int i = 0; i + 2 < n; i++){
        if(s[i] != s[i + 1] and s[i + 1] != s[i + 2]){
            cout << "NO" << endl;
            return;
        }
    }

    for(int i = 0; i + 4 < n; i++){
        int cnt = 0;
        for(int j = i; j < i + 5; j++){
            if(s[j] == s[i + 2]) cnt++;
        }
        if(cnt <= 2){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    // else cout << "NO" <<endl;
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