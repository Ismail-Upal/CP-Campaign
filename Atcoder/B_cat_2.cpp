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
    
    int n; cin >> n;
    vector<string> s(n);
    set<string> se;

    for(int i = 0; i < n; i++){
        cin >> s[i] ;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                string t = s[i];
                t += s[j]; 
                // cout << t << endl;
                se.insert(t);
            }
        }
    }

    cout << se.size() ;
    
    return 0;
}