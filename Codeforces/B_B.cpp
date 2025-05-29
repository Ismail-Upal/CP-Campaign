#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        string s; cin >> s;
        string t;
        for(auto c : s){
            if(c == 'm' or c == 'M'){
                if(t.back() != 'm') t.push_back('m');
            }
            else if(c == 'e' or c == 'E'){
                if(t.back() != 'e') t.push_back('e');
            }
            else if(c == 'o' or c == 'O'){
                if(t.back() != 'o') t.push_back('o');
            }
            else if(c == 'w' or c == 'W'){
                if(t.back() != 'w') t.push_back('w');
            }
            else t.push_back(c);
        }
        if(t == "meow") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}