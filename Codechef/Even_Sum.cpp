#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    int sum = 0, odd = 0, evn = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 2) odd++;
        else evn++;
        sum += x;
    }

    int ok = 0;
    if(sum % 2 == 0 and evn > 0){
        ok = 1;
    }
    else if(sum % 2 and odd > 0){
        ok = 1;
    }
    if(ok) cout << "Yes\n";
    else cout << "No\n";
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