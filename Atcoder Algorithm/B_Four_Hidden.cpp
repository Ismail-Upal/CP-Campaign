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
    
    string s, t; cin >> s >> t;

    int n = s.size(), m = t.size();

    vector<int> idx;
    for(int i = 0; i < n; i++){
        if(s[i] == '?') idx.push_back(i);
    }
    vector<char> v(26);
    for(int i = 0; i < 26; i++){
        v[i] = ('a' + i);
    }
    for(auto a : v){
        for(auto b : v){
            for(auto c : v){
                for(auto d : v){
                    s[idx[0]] = a;
                    s[idx[1]] = b;
                    s[idx[2]] = c;
                    s[idx[3]] = d;
                    if(s.find(t) != string::npos){
                        cout << "Yes";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No";
    
    return 0;
}