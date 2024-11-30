#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    string s; cin>>s;
    set<string> ans;
    while(cin >> s){
        string w = "";
        int n = s.size();
        for(int i=0; i<n; i++){
            if(isalpha(s[i])){
                w+=tolower(s[i]);
            }
            else{
                if(!w.empty()){
                    ans.insert(w);
                }
                w = "";
            }
        }
        if(!w.empty())ans.insert(w);
    }
    for(auto i: ans){
        cout<< i << endl;
    }
    return 0;
}