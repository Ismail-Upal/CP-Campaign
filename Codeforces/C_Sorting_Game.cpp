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
        vector<int> id;
        string t = s;
        sort(t.begin(), t.end());
        if(s == t){
            cout << "Bob" << endl;
            continue;
        }
        cout << "Alice" << endl;

        for(int i = 0; i < n; i++){
            if(s[i] != t[i]) id.push_back(i + 1);
        }

        cout << sz(id) << endl;
        for(auto i : id) cout << i << " ";
        cout << endl; 
    }
    
    return 0;
}