#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int a, b, c; 
    cin >> a >> b >> c;

    string s = "";

    int mx = max({a, b, c});
    int mn = min({a, b, c});

    if(a == mx){
        for(int i = 1; i <= a + b + c; i++) s += "P";
    }
    else if(b == mx){
        for(int i = 1; i <= a + b + c; i++) s += "R";
    }
    else if(c == mx){
        for(int i = 1; i <= a + b + c; i++) s += "S";
    }

    cout << s << endl;
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