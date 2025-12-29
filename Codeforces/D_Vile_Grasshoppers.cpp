#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll p, y; cin >> p >> y;

    for(int i = 3; i <= 10000; i += 3){
        if(i % 2) cout << i << " ";
    }
    cout << endl;
    for(int i = 5; i <= 10000; i += 5){
        if(i % 3 and i % 2) cout << i << " ";
    }
    cout << endl;
    for(int i = 7; i <= 10000; i += 7){
        if(i % 2 and i % 3 and i % 5) cout << i << " ";
    }
    cout << endl;
    for(int i = 11; i <= 10000; i += 11){
        if(i % 2 and i % 3 and i % 5 and i % 7) cout << i << " ";
    }
    
    return 0;
}