#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ok = 1;
    int i = 1;
    while(i <= k){
        int sum = 0;
        for(int j = i; j <= n; j += k){
            sum ^= s[j - 1] - '0';
        }
        if(sum) ok = 0;
        i++;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
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