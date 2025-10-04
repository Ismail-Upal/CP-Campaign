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
        string s; cin >> s;
        int l = 0, r = 0, u = 0, d = 0;
        for(char c : s){
            if(c == 'L') l++;
            if(c == 'R') r++;
            if(c == 'U') u++;
            if(c == 'D') d++;
        }
        int c = min(l, r), e = min(u, d);
        if(c != 0 and e != 0){
            cout << c + c + e + e << endl;
            for(int i = 0; i < c; i++) cout << 'L';
            for(int i = 0; i < e; i++) cout << 'U';
            for(int i = 0; i < c; i++) cout << 'R' ;
            for(int i = 0; i < e; i++) cout << 'D' ;
        }
        else if(c == 0 and e != 0){
            cout << 2 << endl;
            cout << 'U' << 'D' ;
        }
        else if(c != 0 and e == 0){
            cout << 2 << endl;
            cout << 'L' << 'R' ;
        }
        else cout << 0;
        cout << endl;
    }
    
    return 0;
}