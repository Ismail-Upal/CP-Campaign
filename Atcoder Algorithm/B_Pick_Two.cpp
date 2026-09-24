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
    
    string s; cin >> s;
    int x = -1, y = -1;
    for(int i = 0; i < sz(s); i++){
        if(s[i] == '#'){
            if(x != -1) y = i + 1;
            else x = i + 1;
        }
        if(x != -1 and y != -1){
            cout << x << "," << y << endl;
            x = -1, y = -1;
        }
    }
    
    return 0;
}