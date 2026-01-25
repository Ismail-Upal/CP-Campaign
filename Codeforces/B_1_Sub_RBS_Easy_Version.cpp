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
        int n; cin >> n;
        string s; cin >> s;
        int open = 0, clos = 0;
        for(auto i : s){
            if(i == '(') open++;
            else clos++;
        }

        string t = "";
        int ok = 0, cntO = 0, cntC = 0;
        for(int i = 0; i < n; i++){
            if(!ok){
                if(s[i] == '(') t += s[i], open--;
                else ok = 1, clos--, cntC++;
            }
            else if(ok == 1){
                if(s[i] == '(') t += s[i], ok = 2, open--;
                else clos--, cntC++;
            }
        }

        if(ok != 2) cout << -1 << endl;
        else{
            cntO = open;
            if(cntO < cntC) cout << -1 << endl;
            else{
                cout << n - 2 * cntC << endl;
            }
        }
    }
    
    return 0;
}