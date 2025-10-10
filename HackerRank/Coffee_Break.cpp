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
        string a, b;
        for(int i = 0; i <= 1; i++) a.push_back(s[i]);
        for(int i = 3; i <= 4; i++) b.push_back(s[i]);

        if(a == b and a[0] == a[1]) cout << s << endl;
        else if(a >= "00" and a < "11") {
            cout << "11:11" << endl;
        }
        else if(a >= "11" and a < "22") {
            if(a == "11" and b <= "11") cout << "11:11" << endl;
            else cout << "22:22" << endl;
        }
        else if(a == "22" and b <= "22") cout << "22:22" << endl;
        else cout << "00:00" << endl;
    }
    
    return 0;
}