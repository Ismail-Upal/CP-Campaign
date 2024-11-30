#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	optimize();
 
    tc{
        string s; cin >> s;
        stack<char> st;
        int ok = 1;
        for(auto i: s){
            if(i=='{' or i=='(' or i=='['){
                st.push(i);
            }
            else{
                if(st.size()==0){
                    ok = 0; break;
                }
                char tp = st.top();
                if(tp == '(' and i==')') st.pop();
                else if(tp == '{' and i=='}') st.pop();
                else if(tp == '[' and i==']') st.pop();
                else{
                    ok = 0;
                    break;
                }
            }
        }
        if(ok and st.size()==0) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}