#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> s(n + 1), e(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> s[i] >> e[i];
    }

    for(int i = 2; i <= n; i++){
        if(s[i] >= s[1] and e[i] >= e[1]){
            cout << -1 << endl; 
            return;
        }
    }
    cout << s[1] << endl;
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