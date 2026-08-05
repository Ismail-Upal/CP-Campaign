#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 % 2){ 
        if(y1 % 2){ // w
            if(x2 % 2 and y2 % 2 == 0){
                cout << -1 << endl; return;
            }
            if(x2 % 2 == 0 and y2 % 2){
                cout << -1 << endl; return;
            }
        }
        else{ // b
            if(x2 % 2 and y2 % 2){
                cout << -1 << endl; return;
            }
            if(x2 % 2 == 0 and y2 % 2 == 0){
                cout << -1 << endl; return;
            }
        }
    }
    else{
        if(y1 % 2){ // b
            if(x2 % 2 and y2 % 2){
                cout << -1 << endl; return;
            }
            if(x2 % 2 == 0 and y2 % 2 == 0){
                cout << -1 << endl; return;
            }
        }
        else{ // w
            if(x2 % 2 and y2 % 2 == 0){
                cout << -1 << endl; return;
            }
            if(x2 % 2 == 0 and y2 % 2){
                cout << -1 << endl; return;
            }
        }
    }
    

    if(abs(x2 - x1) == abs(y2 - y1)){
        cout << 1 << endl;
    }
    else if(x1 + y1 == x2 + y2){
        cout << 1 << endl;
    }
    else cout << 2 << endl;
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