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
        ll sum = 0;
        for(auto i : s){
            sum += i - '0';
        }
        if(sum % 3){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int ok = 1;
        int i = 0, j = sz(s) - 1;
        while(i <= j){
            if(s[i] != s[j]){
                ok = 0; break;
            }
            i++; j--;
        }
        if(ok) cout << "Palindrome" << endl;
        else cout << "Not a Palindrome" << endl;
    }
    
    return 0;
}