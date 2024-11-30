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
    
    map<string, string>mp;
    string s; 
    while(getline(cin, s)){
        if(s.empty())break;
        string a, b; 
        stringstream ss(s);
        ss >> a >>b;
        mp[b] = a;
    }

    string q; 
    while(cin>>q){
        if(mp.find(q)==mp.end()){
            cout<<"eh"<<endl;
        }
        else cout<<mp[q]<<endl;
    }
 
    return 0;
}