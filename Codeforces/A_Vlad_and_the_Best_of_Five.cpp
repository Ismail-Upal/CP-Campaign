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
        int a = count(s.begin(), s.end(), 'A');
        int b = count(s.begin(), s.end(), 'B');
        if(a > b) cout << "A" << endl;
        else cout << "B" << endl;
    }
    
    return 0;
}