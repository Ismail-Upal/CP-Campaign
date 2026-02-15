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
    
    tc{
        int x, y, z; cin >> x >> y >> z;
        if(z > 1 + max(x, y) or z < max(x, y)) cout << "0 0" << endl;
        else{
            if(max(x, y) == z){
                for(int i = 1; i <= x; i++) cout << 1;
                cout << " ";
                for(int i = 1; i <= y; i++) cout << 1;
                cout << endl;
            }
            else{
                for(int i = 1; i <= x; i++) cout << 9;
                cout << " ";
                for(int i = 1; i <= y; i++) cout << 9;
                cout << endl;
            }
        }
    }
    
    return 0;
}