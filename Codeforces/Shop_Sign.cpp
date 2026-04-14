#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    int star = 1, spac = n - 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= spac; j++) cout << " ";
        for(int j = 1; j <= star; j++) cout << "*";
        if(i < n) cout << endl;
        star++, spac--;
    }
    for(int i = 1; i <= n; i++) cout << "*";
    cout << endl;

    star = n, spac = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= spac; j++) cout << " ";
        for(int j = 1; j <= star; j++) cout << "*";

        if(i == 1){
            for(int j = 1; j <= n; j++) cout << "*";
        }
        cout << endl;
        star--, spac++;
    }
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