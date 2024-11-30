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
    
    int t;cin>>t;
    cin.ignore();
    while(t--){

        string s; getline(cin, s);
        stringstream ss(s);
        string w; 
        while(ss >> w){
            reverse(w.begin(), w.end());
            cout<<w<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}