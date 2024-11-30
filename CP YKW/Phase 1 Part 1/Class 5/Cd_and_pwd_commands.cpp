#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
vector<string> ans;

void update(string s){
    if(s.size() > 0){
        if(s == ".."){
            if(ans.size() > 0) ans.pop_back();
        }
        else{
            ans.push_back(s);
        }
    }
}
 
int32_t main()
{	opt();
    
    tc{
        string cmd; cin>>cmd;
        if(cmd == "pwd"){
            for(auto i : ans)cout<<"/"<<i;
            cout<<"/"<<endl;
        }
        else{
            string s; cin >> s;
            if(s[0] == '/'){
                ans.clear();
            }
            string f = "";
            for(int i=0; i < s.size(); i++){
                if(s[i] == '/'){
                    update(f);
                    f="";
                }
                else{
                    f += s[i];
                }
            }
            update(f);
        }
    }
 
    return 0;
}