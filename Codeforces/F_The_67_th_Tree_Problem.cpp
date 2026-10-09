#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int x, y; cin >> x >> y;
    int tot = x + y;

    if(tot % 2){
        y--;
        if(x > y){
            cout << "NO" << endl; return;
        }
    }
    else{
        x--;
        if(x > y or x < 0){
            cout << "NO" << endl; return;
        }
    }

    cout << "YES" << endl;
    int last = 2;
    for(int i = 2; i <= x + 1; i++){
        cout << 1 << " " << i << endl;
        cout << i << " " << x + i << endl;
        last = x + i + 1;
    }

    for(int i = 1; i <= y - x; i++){
        cout << 1 << " " << last << endl;
        last++;
    }
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