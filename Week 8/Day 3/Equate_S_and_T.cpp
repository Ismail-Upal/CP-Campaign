#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{
    optimize();
 
    tc{
        int n, m; cin >> n >> m; 
        string s, t; cin >> s >> t;
        if(s==t){cout<<"Yes"<<endl; continue;}
        int sa = count(s.begin(), s.end(), 'a');
        int ta = count(t.begin(), t.end(), 'a');
        int sfa=-1, tfa=-2;
        for(int i=0; i<n; i++){
            if(s[i]=='a'){sfa=i;break;}
        } 
        for(int i=0; i<m; i++){
            if(t[i]=='a'){tfa=i;break;}
        } 
        if(sa == ta and sfa == tfa)cout << "Yes" << endl;
        else cout << "No"<<endl;
    }   
 
    return 0;
}