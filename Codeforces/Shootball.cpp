#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int a, b, c;

    cin >> a >> b >> c;
    int x = a + 2 * b + c;

    cin >> a >> b >> c;
    int y = a + 2 * b + c;

    cin >> a >> b >> c;
    int z = a + 2 * b + c;

    if(x >= y and x >= z) cout << 1 ;
    else if(y >= x and y >= z) cout << 2 ;
    else if(z >= x and z >= y) cout << 3;
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}