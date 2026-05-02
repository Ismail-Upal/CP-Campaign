#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    string l = s.substr(0, 1), r = s.substr(0, 1);
    
    for(int i = 1; i < n; i++){
        l += s[i];
        r += s[i];
        sort(r.begin(), r.end());

        if(l > r){
            auto it = find(r.begin(), r.end(), s[i]);
            if (it != r.end()) {
                r.erase(it);
            }

            l = "";
            for(int j = i; j < n; j++){
                l += s[j]; 
            }
            sort(l.begin(), l.end());
            r += l;
            break;
        }
    }
    cout << r << endl;
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